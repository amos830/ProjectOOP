/********************************************************************************
** Form generated from reading UI file 'ImportequipmentMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTEQUIPMENTMENU_H
#define UI_IMPORTEQUIPMENTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "DropDisplayFile.h"

QT_BEGIN_NAMESPACE

class Ui_ImportequipmentMenu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QSpacerItem *verticalSpacer;
    DropDisplayFile *DisplayFile;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PathButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QTextEdit *Preview;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *ImportequipmentMenu)
    {
        if (ImportequipmentMenu->objectName().isEmpty())
            ImportequipmentMenu->setObjectName(QString::fromUtf8("ImportequipmentMenu"));
        ImportequipmentMenu->resize(638, 394);
        verticalLayout = new QVBoxLayout(ImportequipmentMenu);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Title = new QLabel(ImportequipmentMenu);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DisplayFile = new DropDisplayFile(ImportequipmentMenu);
        DisplayFile->setObjectName(QString::fromUtf8("DisplayFile"));
        DisplayFile->setReadOnly(true);

        verticalLayout->addWidget(DisplayFile);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        PathButton = new QPushButton(ImportequipmentMenu);
        PathButton->setObjectName(QString::fromUtf8("PathButton"));

        horizontalLayout->addWidget(PathButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(ImportequipmentMenu);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Preview = new QTextEdit(ImportequipmentMenu);
        Preview->setObjectName(QString::fromUtf8("Preview"));
        Preview->setReadOnly(true);

        verticalLayout->addWidget(Preview);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        OkButton = new QPushButton(ImportequipmentMenu);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));

        gridLayout->addWidget(OkButton, 0, 2, 1, 1);

        CancelButton = new QPushButton(ImportequipmentMenu);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        gridLayout->addWidget(CancelButton, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ImportequipmentMenu);
        QObject::connect(PathButton, SIGNAL(clicked()), ImportequipmentMenu, SLOT(selectFile()));
        QObject::connect(DisplayFile, SIGNAL(textChanged(QString)), ImportequipmentMenu, SLOT(updatePreview()));
        QObject::connect(CancelButton, SIGNAL(clicked()), ImportequipmentMenu, SLOT(hide()));
        QObject::connect(OkButton, SIGNAL(clicked()), ImportequipmentMenu, SLOT(importEquipment()));

        QMetaObject::connectSlotsByName(ImportequipmentMenu);
    } // setupUi

    void retranslateUi(QDialog *ImportequipmentMenu)
    {
        ImportequipmentMenu->setWindowTitle(QApplication::translate("ImportequipmentMenu", "ImportequipmentMenu", nullptr));
        Title->setText(QApplication::translate("ImportequipmentMenu", "Drag And Drop equipment File into box below", nullptr));
        PathButton->setText(QApplication::translate("ImportequipmentMenu", "Select Path", nullptr));
        label->setText(QApplication::translate("ImportequipmentMenu", "Preview", nullptr));
        OkButton->setText(QApplication::translate("ImportequipmentMenu", "Ok", nullptr));
        CancelButton->setText(QApplication::translate("ImportequipmentMenu", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportequipmentMenu: public Ui_ImportequipmentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTEQUIPMENTMENU_H
