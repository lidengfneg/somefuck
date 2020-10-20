#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "html_view.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_PointCloud_triggered();

    void on_actionConvert_PointCloud_triggered();

    void on_actionDebug_Tool_triggered();

private:


private:
    Ui::MainWindow *ui;

    html_view *view;
    QWebEngineView *inspector_;
};
#endif // MAINWINDOW_H
