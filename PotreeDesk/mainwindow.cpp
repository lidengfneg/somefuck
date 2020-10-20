#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pointconvertfrom.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    view = new html_view(9999, this);
    ui->setupUi(this);
    this->setCentralWidget(view);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_PointCloud_triggered()
{

}

void MainWindow::on_actionConvert_PointCloud_triggered()
{
    QFileDialog *originpointDlg=new QFileDialog (this);
    originpointDlg->setWindowTitle(tr("Choose origin PointCloud"));
    originpointDlg->setNameFilter(tr("Point(*.LAS *.las *.laz *.LAZ)"));
    QStringList originPointCloud;
    if(originpointDlg->exec())
    {
        originPointCloud = originpointDlg->selectedFiles();
    }

    PointConvertFrom *convert2potree=new PointConvertFrom(this);
    convert2potree->setWindowTitle(tr("convert log"));
    convert2potree->show();
    QString command="D:/test/PotreeDesk/tools/convert/PotreeConverter.exe";
    convert2potree->doconvert(command,originPointCloud);
}

void MainWindow::on_actionDebug_Tool_triggered()
{
    inspector_ = new QWebEngineView(nullptr);
    inspector_->load(QUrl("http://localhost:9998"));
    // inspector_->load(QUrl("chrome://gpu"));
    inspector_->setWindowTitle(tr("Debug tool"));
    view->page()->setDevToolsPage(inspector_->page());
    //
    inspector_->show();
}
