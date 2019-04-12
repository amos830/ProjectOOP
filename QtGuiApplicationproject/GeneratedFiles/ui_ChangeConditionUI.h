/********************************************************************************
** Form generated from reading UI file 'ChangeConditionUI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECONDITIONUI_H
#define UI_CHANGECONDITIONUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeConditionUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QSpacerItem *UpverticalSpacer;
    QComboBox *ConditionCombo;
    QSpacerItem *LowverticalSpacer;
    QGridLayout *ButtonsLayout;
    QPushButton *OkButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *ChangeConditionUI)
    {
        if (ChangeConditionUI->objectName().isEmpty())
            ChangeConditionUI->setObjectName(QString::fromUtf8("ChangeConditionUI"));
        ChangeConditionUI->resize(475, 300);
        verticalLayout = new QVBoxLayout(ChangeConditionUI);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Title = new QLabel(ChangeConditionUI);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title);

        UpverticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(UpverticalSpacer);

        ConditionCombo = new QComboBox(ChangeConditionUI);
        ConditionCombo->setObjectName(QString::fromUtf8("ConditionCombo"));

        verticalLayout->addWidget(ConditionCombo);

        LowverticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(LowverticalSpacer);

        ButtonsLayout = new QGridLayout();
        ButtonsLayout->setSpacing(6);
        ButtonsLayout->setObjectName(QString::fromUtf8("ButtonsLayout"));
        OkButton = new QPushButton(ChangeConditionUI);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));

        ButtonsLayout->addWidget(OkButton, 1, 0, 1, 1);

        CancelButton = new QPushButton(ChangeConditionUI);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        ButtonsLayout->addWidget(CancelButton, 1, 1, 1, 1);


        verticalLayout->addLayout(ButtonsLayout);


        retranslateUi(ChangeConditionUI);
        QObject::connect(OkButton, SIGNAL(clicked()), ChangeConditionUI, SLOT(modifyCondition()));
        QObject::connect(CancelButton, SIGNAL(clicked()), ChangeConditionUI, SLOT(hide()));

        QMetaObject::connectSlotsByName(ChangeConditionUI);
    } // setupUi

    void retranslateUi(QDialog *ChangeConditionUI)
    {
        ChangeConditionUI->setWindowTitle(QApplication::translate("ChangeConditionUI", "Change Condition", nullptr));
        Title->setText(QApplication::translate("ChangeConditionUI", "Change Condition For", nullptr));
        OkButton->setText(QApplication::translate("ChangeConditionUI", "Ok", nullptr));
        CancelButton->setText(QApplication::translate("ChangeConditionUI", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeConditionUI: public Ui_ChangeConditionUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECONDITIONUI_H
