/********************************************************************************
** Form generated from reading UI file 'convertPoint.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTPOINT_H
#define UI_CONVERTPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvertFrom
{
public:
    QTextBrowser *Logger;

    void setupUi(QWidget *ConvertFrom)
    {
        if (ConvertFrom->objectName().isEmpty())
            ConvertFrom->setObjectName(QString::fromUtf8("ConvertFrom"));
        ConvertFrom->resize(703, 445);
        Logger = new QTextBrowser(ConvertFrom);
        Logger->setObjectName(QString::fromUtf8("Logger"));
        Logger->setGeometry(QRect(10, 10, 681, 421));

        retranslateUi(ConvertFrom);

        QMetaObject::connectSlotsByName(ConvertFrom);
    } // setupUi

    void retranslateUi(QWidget *ConvertFrom)
    {
        ConvertFrom->setWindowTitle(QCoreApplication::translate("ConvertFrom", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConvertFrom: public Ui_ConvertFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTPOINT_H
