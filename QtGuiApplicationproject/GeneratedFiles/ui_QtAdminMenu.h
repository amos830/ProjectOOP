/********************************************************************************
** Form generated from reading UI file 'QtAdminMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTADMINMENU_H
#define UI_QTADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtAdminMenu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *Title;
    QPushButton *DisplayCamp;
    QPushButton *Exit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *ExportCampEquipment;
    QSpacerItem *verticalSpacer_3;
    QPushButton *DisplayLoan;
    QPushButton *ImportCamp;
    QPushButton *ImportUser;
    QPushButton *ExportLoanRecords;
    QPushButton *Logout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtAdminMenu)
    {
        if (QtAdminMenu->objectName().isEmpty())
            QtAdminMenu->setObjectName(QString::fromUtf8("QtAdminMenu"));
        QtAdminMenu->resize(578, 504);
        centralWidget = new QWidget(QtAdminMenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        Title = new QLabel(centralWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setTextFormat(Qt::PlainText);
        Title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Title, 0, 1, 1, 1);

        DisplayCamp = new QPushButton(centralWidget);
        DisplayCamp->setObjectName(QString::fromUtf8("DisplayCamp"));

        gridLayout->addWidget(DisplayCamp, 4, 2, 1, 1);

        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        gridLayout->addWidget(Exit, 7, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 3);

        ExportCampEquipment = new QPushButton(centralWidget);
        ExportCampEquipment->setObjectName(QString::fromUtf8("ExportCampEquipment"));

        gridLayout->addWidget(ExportCampEquipment, 5, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 10, 1, 1, 1);

        DisplayLoan = new QPushButton(centralWidget);
        DisplayLoan->setObjectName(QString::fromUtf8("DisplayLoan"));

        gridLayout->addWidget(DisplayLoan, 4, 0, 1, 1);

        ImportCamp = new QPushButton(centralWidget);
        ImportCamp->setObjectName(QString::fromUtf8("ImportCamp"));

        gridLayout->addWidget(ImportCamp, 3, 2, 1, 1);

        ImportUser = new QPushButton(centralWidget);
        ImportUser->setObjectName(QString::fromUtf8("ImportUser"));

        gridLayout->addWidget(ImportUser, 3, 0, 1, 1);

        ExportLoanRecords = new QPushButton(centralWidget);
        ExportLoanRecords->setObjectName(QString::fromUtf8("ExportLoanRecords"));

        gridLayout->addWidget(ExportLoanRecords, 5, 0, 1, 1);

        Logout = new QPushButton(centralWidget);
        Logout->setObjectName(QString::fromUtf8("Logout"));

        gridLayout->addWidget(Logout, 8, 1, 1, 1);

        QtAdminMenu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtAdminMenu);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtAdminMenu->setStatusBar(statusBar);

        retranslateUi(QtAdminMenu);
        QObject::connect(DisplayCamp, SIGNAL(clicked()), QtAdminMenu, SLOT(displayEquipmentAdmin()));
        QObject::connect(Exit, SIGNAL(clicked()), QtAdminMenu, SLOT(close()));
        QObject::connect(ImportCamp, SIGNAL(clicked()), QtAdminMenu, SLOT(importCampEquipment()));
        QObject::connect(ExportCampEquipment, SIGNAL(clicked()), QtAdminMenu, SLOT(exportCampEquipment()));
        QObject::connect(ExportLoanRecords, SIGNAL(clicked()), QtAdminMenu, SLOT(exportLoanRecords()));
        QObject::connect(DisplayLoan, SIGNAL(clicked()), QtAdminMenu, SLOT(displayLoanRecords()));
        QObject::connect(ImportUser, SIGNAL(clicked()), QtAdminMenu, SLOT(importUsers()));
        QObject::connect(Logout, SIGNAL(clicked()), QtAdminMenu, SLOT(close()));

        QMetaObject::connectSlotsByName(QtAdminMenu);
    } // setupUi

    void retranslateUi(QMainWindow *QtAdminMenu)
    {
        QtAdminMenu->setWindowTitle(QApplication::translate("QtAdminMenu", "Administrator Menu", nullptr));
        label->setText(QApplication::translate("QtAdminMenu", "Welcome Adminsitrator", nullptr));
        Title->setText(QApplication::translate("QtAdminMenu", "Scout System", nullptr));
        DisplayCamp->setText(QApplication::translate("QtAdminMenu", "Display Camp Equipment", nullptr));
        Exit->setText(QApplication::translate("QtAdminMenu", "Exit", nullptr));
        ExportCampEquipment->setText(QApplication::translate("QtAdminMenu", "Export Camp Equipment", nullptr));
        DisplayLoan->setText(QApplication::translate("QtAdminMenu", "Display Loan Records", nullptr));
        ImportCamp->setText(QApplication::translate("QtAdminMenu", "Import Camp Equipments", nullptr));
        ImportUser->setText(QApplication::translate("QtAdminMenu", "Import Users", nullptr));
        ExportLoanRecords->setText(QApplication::translate("QtAdminMenu", "Export Loan Records", nullptr));
        Logout->setText(QApplication::translate("QtAdminMenu", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtAdminMenu: public Ui_QtAdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTADMINMENU_H
