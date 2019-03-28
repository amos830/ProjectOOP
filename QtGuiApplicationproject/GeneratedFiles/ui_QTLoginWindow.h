/********************************************************************************
** Form generated from reading UI file 'QTLoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOGINWINDOW_H
#define UI_QTLOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QTLoginWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *TitleText;
    QLabel *Error;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *PasswordInput;
    QLabel *PasswordText_2;
    QLineEdit *UserNameInput;
    QLabel *NameText_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit;
    QPushButton *ConfirmButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *QTLoginWindow)
    {
        if (QTLoginWindow->objectName().isEmpty())
            QTLoginWindow->setObjectName(QString::fromUtf8("QTLoginWindow"));
        QTLoginWindow->resize(392, 300);
        verticalLayout_2 = new QVBoxLayout(QTLoginWindow);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleText = new QLabel(QTLoginWindow);
        TitleText->setObjectName(QString::fromUtf8("TitleText"));
        TitleText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(TitleText);

        Error = new QLabel(QTLoginWindow);
        Error->setObjectName(QString::fromUtf8("Error"));
        Error->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Error);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        PasswordInput = new QLineEdit(QTLoginWindow);
        PasswordInput->setObjectName(QString::fromUtf8("PasswordInput"));

        gridLayout_2->addWidget(PasswordInput, 1, 1, 1, 1);

        PasswordText_2 = new QLabel(QTLoginWindow);
        PasswordText_2->setObjectName(QString::fromUtf8("PasswordText_2"));

        gridLayout_2->addWidget(PasswordText_2, 1, 0, 1, 1);

        UserNameInput = new QLineEdit(QTLoginWindow);
        UserNameInput->setObjectName(QString::fromUtf8("UserNameInput"));

        gridLayout_2->addWidget(UserNameInput, 0, 1, 1, 1);

        NameText_2 = new QLabel(QTLoginWindow);
        NameText_2->setObjectName(QString::fromUtf8("NameText_2"));

        gridLayout_2->addWidget(NameText_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        Exit = new QPushButton(QTLoginWindow);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        gridLayout->addWidget(Exit, 1, 1, 1, 1);

        ConfirmButton = new QPushButton(QTLoginWindow);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));

        gridLayout->addWidget(ConfirmButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(QTLoginWindow);
        QObject::connect(ConfirmButton, SIGNAL(clicked()), QTLoginWindow, SLOT(checkPassword()));

        QMetaObject::connectSlotsByName(QTLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *QTLoginWindow)
    {
        QTLoginWindow->setWindowTitle(QApplication::translate("QTLoginWindow", "Login", nullptr));
        TitleText->setText(QApplication::translate("QTLoginWindow", "Login", nullptr));
        Error->setText(QString());
        PasswordText_2->setText(QApplication::translate("QTLoginWindow", "Password", nullptr));
        NameText_2->setText(QApplication::translate("QTLoginWindow", "Username", nullptr));
        Exit->setText(QApplication::translate("QTLoginWindow", "Exit", nullptr));
        ConfirmButton->setText(QApplication::translate("QTLoginWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTLoginWindow: public Ui_QTLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOGINWINDOW_H
