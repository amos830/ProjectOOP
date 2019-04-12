/********************************************************************************
** Form generated from reading UI file 'Project.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QLabel *Welcome;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *LoanRecord;
    QPushButton *pushButton_3;
    QPushButton *ListOfEquipment;
    QGridLayout *gridLayout_2;
    QPushButton *LogoutButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *ExitButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjectClass)
    {
        if (ProjectClass->objectName().isEmpty())
            ProjectClass->setObjectName(QString::fromUtf8("ProjectClass"));
        ProjectClass->resize(600, 381);
        centralWidget = new QWidget(ProjectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title);

        Welcome = new QLabel(centralWidget);
        Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Welcome);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        LoanRecord = new QPushButton(centralWidget);
        LoanRecord->setObjectName(QString::fromUtf8("LoanRecord"));

        gridLayout->addWidget(LoanRecord, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        ListOfEquipment = new QPushButton(centralWidget);
        ListOfEquipment->setObjectName(QString::fromUtf8("ListOfEquipment"));

        gridLayout->addWidget(ListOfEquipment, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LogoutButton = new QPushButton(centralWidget);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));

        gridLayout_2->addWidget(LogoutButton, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        ExitButton = new QPushButton(centralWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        gridLayout_2->addWidget(ExitButton, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        ProjectClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ProjectClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProjectClass->setStatusBar(statusBar);

        retranslateUi(ProjectClass);
        QObject::connect(LogoutButton, SIGNAL(clicked()), ProjectClass, SLOT(close()));
        QObject::connect(ListOfEquipment, SIGNAL(clicked()), ProjectClass, SLOT(DisplayAndBorrow()));
        QObject::connect(LoanRecord, SIGNAL(clicked()), ProjectClass, SLOT(displayLoanRecord()));

        QMetaObject::connectSlotsByName(ProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProjectClass)
    {
        ProjectClass->setWindowTitle(QApplication::translate("ProjectClass", "Project", nullptr));
        Title->setText(QApplication::translate("ProjectClass", "Scout System", nullptr));
        Welcome->setText(QApplication::translate("ProjectClass", "Welcome", nullptr));
        LoanRecord->setText(QApplication::translate("ProjectClass", "List Loan Records", nullptr));
        pushButton_3->setText(QApplication::translate("ProjectClass", "Test 3", nullptr));
        ListOfEquipment->setText(QApplication::translate("ProjectClass", "List Of Equipment", nullptr));
        LogoutButton->setText(QApplication::translate("ProjectClass", "Log Out", nullptr));
        ExitButton->setText(QApplication::translate("ProjectClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectClass: public Ui_ProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
