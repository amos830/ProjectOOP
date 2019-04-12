/********************************************************************************
** Form generated from reading UI file 'exportEquipmentFile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTEQUIPMENTFILE_H
#define UI_EXPORTEQUIPMENTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>

QT_BEGIN_NAMESPACE

class Ui_exportEquipmentFile
{
public:

    void setupUi(QFileDialog *exportEquipmentFile)
    {
        if (exportEquipmentFile->objectName().isEmpty())
            exportEquipmentFile->setObjectName(QString::fromUtf8("exportEquipmentFile"));
        exportEquipmentFile->resize(400, 300);

        retranslateUi(exportEquipmentFile);

        QMetaObject::connectSlotsByName(exportEquipmentFile);
    } // setupUi

    void retranslateUi(QFileDialog *exportEquipmentFile)
    {
        exportEquipmentFile->setWindowTitle(QApplication::translate("exportEquipmentFile", "exportEquipmentFile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exportEquipmentFile: public Ui_exportEquipmentFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTEQUIPMENTFILE_H
