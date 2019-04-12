/********************************************************************************
** Form generated from reading UI file 'ExportFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTFILEDIALOG_H
#define UI_EXPORTFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>

QT_BEGIN_NAMESPACE

class Ui_ExportFileDialog
{
public:

    void setupUi(QFileDialog *ExportFileDialog)
    {
        if (ExportFileDialog->objectName().isEmpty())
            ExportFileDialog->setObjectName(QString::fromUtf8("ExportFileDialog"));
        ExportFileDialog->resize(400, 300);

        retranslateUi(ExportFileDialog);

        QMetaObject::connectSlotsByName(ExportFileDialog);
    } // setupUi

    void retranslateUi(QFileDialog *ExportFileDialog)
    {
        ExportFileDialog->setWindowTitle(QApplication::translate("ExportFileDialog", "ExportFileDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportFileDialog: public Ui_ExportFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTFILEDIALOG_H
