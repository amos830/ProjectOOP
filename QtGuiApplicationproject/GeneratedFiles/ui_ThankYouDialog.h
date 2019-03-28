/********************************************************************************
** Form generated from reading UI file 'ThankYouDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THANKYOUDIALOG_H
#define UI_THANKYOUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThankYouDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ThankMessage;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit;

    void setupUi(QDialog *ThankYouDialog)
    {
        if (ThankYouDialog->objectName().isEmpty())
            ThankYouDialog->setObjectName(QString::fromUtf8("ThankYouDialog"));
        ThankYouDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ThankYouDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ThankMessage = new QLabel(ThankYouDialog);
        ThankMessage->setObjectName(QString::fromUtf8("ThankMessage"));
        ThankMessage->setTextFormat(Qt::PlainText);
        ThankMessage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ThankMessage);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        Exit = new QPushButton(ThankYouDialog);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        gridLayout->addWidget(Exit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ThankYouDialog);

        QMetaObject::connectSlotsByName(ThankYouDialog);
    } // setupUi

    void retranslateUi(QDialog *ThankYouDialog)
    {
        ThankYouDialog->setWindowTitle(QApplication::translate("ThankYouDialog", "Dialog", nullptr));
        ThankMessage->setText(QApplication::translate("ThankYouDialog", "Thank you for using the system", nullptr));
        Exit->setText(QApplication::translate("ThankYouDialog", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThankYouDialog: public Ui_ThankYouDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THANKYOUDIALOG_H
