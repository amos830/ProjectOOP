/********************************************************************************
** Form generated from reading UI file 'QtLoanRecordView.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOANRECORDVIEW_H
#define UI_QTLOANRECORDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtLoanRecordView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QTableView *LoanRecordView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit;

    void setupUi(QDialog *QtLoanRecordView)
    {
        if (QtLoanRecordView->objectName().isEmpty())
            QtLoanRecordView->setObjectName(QString::fromUtf8("QtLoanRecordView"));
        QtLoanRecordView->resize(678, 408);
        verticalLayout = new QVBoxLayout(QtLoanRecordView);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(QtLoanRecordView);
        title->setObjectName(QString::fromUtf8("title"));

        verticalLayout->addWidget(title);

        LoanRecordView = new QTableView(QtLoanRecordView);
        LoanRecordView->setObjectName(QString::fromUtf8("LoanRecordView"));

        verticalLayout->addWidget(LoanRecordView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Exit = new QPushButton(QtLoanRecordView);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        horizontalLayout->addWidget(Exit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QtLoanRecordView);
        QObject::connect(Exit, SIGNAL(clicked()), QtLoanRecordView, SLOT(hide()));

        QMetaObject::connectSlotsByName(QtLoanRecordView);
    } // setupUi

    void retranslateUi(QDialog *QtLoanRecordView)
    {
        QtLoanRecordView->setWindowTitle(QApplication::translate("QtLoanRecordView", "QtLoanRecordView", nullptr));
        title->setText(QApplication::translate("QtLoanRecordView", "Loan Record", nullptr));
        Exit->setText(QApplication::translate("QtLoanRecordView", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLoanRecordView: public Ui_QtLoanRecordView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOANRECORDVIEW_H
