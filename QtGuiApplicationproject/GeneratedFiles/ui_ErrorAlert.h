/********************************************************************************
** Form generated from reading UI file 'ErrorAlert.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORALERT_H
#define UI_ERRORALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorAlert
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *ErrorMessage;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ConfirmButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *ErrorAlert)
    {
        if (ErrorAlert->objectName().isEmpty())
            ErrorAlert->setObjectName(QString::fromUtf8("ErrorAlert"));
        ErrorAlert->resize(400, 300);
        verticalLayout = new QVBoxLayout(ErrorAlert);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ErrorMessage = new QLabel(ErrorAlert);
        ErrorMessage->setObjectName(QString::fromUtf8("ErrorMessage"));
        ErrorMessage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ErrorMessage);

        verticalSpacer_2 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ConfirmButton = new QPushButton(ErrorAlert);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));

        horizontalLayout->addWidget(ConfirmButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(ErrorAlert);
        QObject::connect(ConfirmButton, SIGNAL(clicked()), ErrorAlert, SLOT(hide()));

        QMetaObject::connectSlotsByName(ErrorAlert);
    } // setupUi

    void retranslateUi(QDialog *ErrorAlert)
    {
        ErrorAlert->setWindowTitle(QApplication::translate("ErrorAlert", "ErrorAlert", nullptr));
        ErrorMessage->setText(QString());
        ConfirmButton->setText(QApplication::translate("ErrorAlert", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorAlert: public Ui_ErrorAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORALERT_H
