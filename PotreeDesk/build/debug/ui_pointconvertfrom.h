/********************************************************************************
** Form generated from reading UI file 'pointconvertfrom.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTCONVERTFROM_H
#define UI_POINTCONVERTFROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PointConvertFrom
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *PointConvertFrom)
    {
        if (PointConvertFrom->objectName().isEmpty())
            PointConvertFrom->setObjectName(QString::fromUtf8("PointConvertFrom"));
        PointConvertFrom->resize(660, 424);
        textEdit = new QTextEdit(PointConvertFrom);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 641, 401));

        retranslateUi(PointConvertFrom);

        QMetaObject::connectSlotsByName(PointConvertFrom);
    } // setupUi

    void retranslateUi(QDialog *PointConvertFrom)
    {
        PointConvertFrom->setWindowTitle(QCoreApplication::translate("PointConvertFrom", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("PointConvertFrom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointConvertFrom: public Ui_PointConvertFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTCONVERTFROM_H
