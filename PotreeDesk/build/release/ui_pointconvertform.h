/********************************************************************************
** Form generated from reading UI file 'pointconvertform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTCONVERTFORM_H
#define UI_POINTCONVERTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointConvertForm
{
public:
    QTextEdit *textEdit;

    void setupUi(QWidget *PointConvertForm)
    {
        if (PointConvertForm->objectName().isEmpty())
            PointConvertForm->setObjectName(QString::fromUtf8("PointConvertForm"));
        PointConvertForm->resize(635, 372);
        textEdit = new QTextEdit(PointConvertForm);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 611, 351));

        retranslateUi(PointConvertForm);

        QMetaObject::connectSlotsByName(PointConvertForm);
    } // setupUi

    void retranslateUi(QWidget *PointConvertForm)
    {
        PointConvertForm->setWindowTitle(QCoreApplication::translate("PointConvertForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointConvertForm: public Ui_PointConvertForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTCONVERTFORM_H
