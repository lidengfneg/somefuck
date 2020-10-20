#include "pointconvertfrom.h"
#include "ui_pointconvertfrom.h"

PointConvertFrom::PointConvertFrom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PointConvertFrom)
{
    ui->setupUi(this);
}

PointConvertFrom::~PointConvertFrom()
{
    if(convertprocess)
    {
        convertprocess->terminate();
        convertprocess->waitForFinished();
    }
    delete ui;
}

void PointConvertFrom::doconvert(QString &command, QStringList &arg)
{
    convertprocess=new QProcess(this);

    connect(convertprocess , SIGNAL(readyRead()) , this , SLOT(on_readoutput()));
    convertprocess->start(command,arg);

    //convertprocess->waitForReadyRead();
    //ui->textEdit->append("Start converting points. Don't drop out");
    //convertprocess->waitForStarted();
    //QByteArray logread=convertprocess.readAllStandardOutput();

    //ui->textEdit->append(QString::fromLocal8Bit(logread));
    //ui->textEdit->append("succeed");

}
void PointConvertFrom::on_readoutput()
{
    QProcess *pProces = (QProcess *)sender();
    QByteArray logread=pProces->readAll();
    ui->textEdit->append(QString::fromLocal8Bit(logread));
    ui->textEdit->update();
}
