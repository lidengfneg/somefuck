#ifndef POINTCONVERTFROM_H
#define POINTCONVERTFROM_H

#include <QDialog>
#include <QTextEdit>
#include <QString>
#include <QtCore/QProcess>

namespace Ui {
class PointConvertFrom;
}

class PointConvertFrom : public QDialog
{
    Q_OBJECT

public:
    explicit PointConvertFrom(QWidget *parent = nullptr);
    ~PointConvertFrom();
    void doconvert(QString &command,QStringList &arg);




private:
    Ui::PointConvertFrom *ui;
    QProcess *convertprocess;

    void on_readoutput();


};

#endif // POINTCONVERTFROM_H
