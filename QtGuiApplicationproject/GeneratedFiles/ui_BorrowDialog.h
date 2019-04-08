/********************************************************************************
** Form generated from reading UI file 'BorrowDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWDIALOG_H
#define UI_BORROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Exit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *ListTitle;
    QTabWidget *tabWidget;
    QWidget *TentTab;
    QVBoxLayout *verticalLayout_3;
    QTableView *tentTableView;
    QWidget *StoveTab;
    QVBoxLayout *verticalLayout_4;
    QTableView *StoveTableView;
    QWidget *LanternTab;
    QVBoxLayout *verticalLayout_5;
    QTableView *LanternTableView;
    QGridLayout *gridLayout;
    QListView *listView_2;
    QLabel *label_2;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QPushButton *Right;
    QPushButton *Left;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QListView *listView;

    void setupUi(QDialog *BorrowDialog)
    {
        if (BorrowDialog->objectName().isEmpty())
            BorrowDialog->setObjectName(QString::fromUtf8("BorrowDialog"));
        BorrowDialog->resize(861, 538);
        verticalLayout_2 = new QVBoxLayout(BorrowDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Exit = new QPushButton(BorrowDialog);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        horizontalLayout->addWidget(Exit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ListTitle = new QLabel(BorrowDialog);
        ListTitle->setObjectName(QString::fromUtf8("ListTitle"));

        verticalLayout->addWidget(ListTitle);

        tabWidget = new QTabWidget(BorrowDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        TentTab = new QWidget();
        TentTab->setObjectName(QString::fromUtf8("TentTab"));
        verticalLayout_3 = new QVBoxLayout(TentTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tentTableView = new QTableView(TentTab);
        tentTableView->setObjectName(QString::fromUtf8("tentTableView"));

        verticalLayout_3->addWidget(tentTableView);

        tabWidget->addTab(TentTab, QString());
        StoveTab = new QWidget();
        StoveTab->setObjectName(QString::fromUtf8("StoveTab"));
        verticalLayout_4 = new QVBoxLayout(StoveTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        StoveTableView = new QTableView(StoveTab);
        StoveTableView->setObjectName(QString::fromUtf8("StoveTableView"));

        verticalLayout_4->addWidget(StoveTableView);

        tabWidget->addTab(StoveTab, QString());
        LanternTab = new QWidget();
        LanternTab->setObjectName(QString::fromUtf8("LanternTab"));
        verticalLayout_5 = new QVBoxLayout(LanternTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        LanternTableView = new QTableView(LanternTab);
        LanternTableView->setObjectName(QString::fromUtf8("LanternTableView"));
        LanternTableView->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout_5->addWidget(LanternTableView);

        tabWidget->addTab(LanternTab, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_5->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView_2 = new QListView(BorrowDialog);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        gridLayout->addWidget(listView_2, 2, 3, 1, 1);

        label_2 = new QLabel(BorrowDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label = new QLabel(BorrowDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Right = new QPushButton(BorrowDialog);
        Right->setObjectName(QString::fromUtf8("Right"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Right->sizePolicy().hasHeightForWidth());
        Right->setSizePolicy(sizePolicy);
        Right->setSizeIncrement(QSize(1, 1));
        QFont font;
        font.setPointSize(8);
        Right->setFont(font);

        gridLayout_2->addWidget(Right, 1, 1, 1, 1);

        Left = new QPushButton(BorrowDialog);
        Left->setObjectName(QString::fromUtf8("Left"));

        gridLayout_2->addWidget(Left, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 2, 1, 1);

        listView = new QListView(BorrowDialog);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 2, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalLayout_5->setStretch(0, 7);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(BorrowDialog);
        QObject::connect(Exit, SIGNAL(clicked()), BorrowDialog, SLOT(hide()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BorrowDialog);
    } // setupUi

    void retranslateUi(QDialog *BorrowDialog)
    {
        BorrowDialog->setWindowTitle(QApplication::translate("BorrowDialog", "BorrowDialog", nullptr));
        Exit->setText(QApplication::translate("BorrowDialog", "Exit", nullptr));
        ListTitle->setText(QApplication::translate("BorrowDialog", "List Of Avaliable Equipment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TentTab), QApplication::translate("BorrowDialog", "Tent", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(StoveTab), QApplication::translate("BorrowDialog", "Stove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LanternTab), QApplication::translate("BorrowDialog", "Lantern", nullptr));
        label_2->setText(QApplication::translate("BorrowDialog", "Borrowed Equipment", nullptr));
        label->setText(QApplication::translate("BorrowDialog", "Avaliable Equipments", nullptr));
        Right->setText(QApplication::translate("BorrowDialog", ">", nullptr));
        Left->setText(QApplication::translate("BorrowDialog", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowDialog: public Ui_BorrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWDIALOG_H
