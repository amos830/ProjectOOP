/********************************************************************************
** Form generated from reading UI file 'QTItemMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTITEMMENU_H
#define UI_QTITEMMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTItemMenu
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QTabWidget *tabWidget;
    QWidget *TentTab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QTableView *Tent_Table;
    QWidget *StoveTab;
    QVBoxLayout *verticalLayout_3;
    QTableView *Stove_Table;
    QWidget *LanternTab;
    QVBoxLayout *verticalLayout_4;
    QTableView *Lantern_Table;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Exit;

    void setupUi(QDialog *QTItemMenu)
    {
        if (QTItemMenu->objectName().isEmpty())
            QTItemMenu->setObjectName(QString::fromUtf8("QTItemMenu"));
        QTItemMenu->resize(1179, 607);
        verticalLayout_5 = new QVBoxLayout(QTItemMenu);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Title = new QLabel(QTItemMenu);
        Title->setObjectName(QString::fromUtf8("Title"));

        verticalLayout->addWidget(Title);

        tabWidget = new QTabWidget(QTItemMenu);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        TentTab = new QWidget();
        TentTab->setObjectName(QString::fromUtf8("TentTab"));
        verticalLayout_2 = new QVBoxLayout(TentTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Tent_Table = new QTableView(TentTab);
        Tent_Table->setObjectName(QString::fromUtf8("Tent_Table"));

        gridLayout->addWidget(Tent_Table, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(TentTab, QString());
        StoveTab = new QWidget();
        StoveTab->setObjectName(QString::fromUtf8("StoveTab"));
        verticalLayout_3 = new QVBoxLayout(StoveTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Stove_Table = new QTableView(StoveTab);
        Stove_Table->setObjectName(QString::fromUtf8("Stove_Table"));

        verticalLayout_3->addWidget(Stove_Table);

        tabWidget->addTab(StoveTab, QString());
        LanternTab = new QWidget();
        LanternTab->setObjectName(QString::fromUtf8("LanternTab"));
        verticalLayout_4 = new QVBoxLayout(LanternTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Lantern_Table = new QTableView(LanternTab);
        Lantern_Table->setObjectName(QString::fromUtf8("Lantern_Table"));

        verticalLayout_4->addWidget(Lantern_Table);

        tabWidget->addTab(LanternTab, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        Exit = new QPushButton(QTItemMenu);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        horizontalLayout->addWidget(Exit);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(QTItemMenu);
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), QTItemMenu, SLOT(updateTable()));
        QObject::connect(Tent_Table, SIGNAL(doubleClicked(QModelIndex)), QTItemMenu, SLOT(editConditionTent(QModelIndex)));
        QObject::connect(Stove_Table, SIGNAL(doubleClicked(QModelIndex)), QTItemMenu, SLOT(editConditionStove(QModelIndex)));
        QObject::connect(Lantern_Table, SIGNAL(doubleClicked(QModelIndex)), QTItemMenu, SLOT(editConditionLantern(QModelIndex)));
        QObject::connect(Exit, SIGNAL(clicked()), QTItemMenu, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QTItemMenu);
    } // setupUi

    void retranslateUi(QDialog *QTItemMenu)
    {
        QTItemMenu->setWindowTitle(QApplication::translate("QTItemMenu", "List Of Equipment(Admin)", nullptr));
        Title->setText(QApplication::translate("QTItemMenu", "List of avalible equipments", nullptr));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tabWidget->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        tabWidget->setTabText(tabWidget->indexOf(TentTab), QApplication::translate("QTItemMenu", "Tent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(StoveTab), QApplication::translate("QTItemMenu", "Stove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LanternTab), QApplication::translate("QTItemMenu", "Lantern", nullptr));
        Exit->setText(QApplication::translate("QTItemMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTItemMenu: public Ui_QTItemMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTITEMMENU_H
