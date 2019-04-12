#include "QtLoanRecordView.h"
#include "LoanControler.h"
#include <QStandardItemModel>
#include <QDate>
QtLoanRecordView::QtLoanRecordView(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

QtLoanRecordView::~QtLoanRecordView()
{
}

void QtLoanRecordView::initialize(LoanControl* arg,bool admin) {
	controller = arg;
	updateTable(admin);
}

void QtLoanRecordView::updateTable(bool admin) {
	if (admin) {
		QStandardItemModel* table = new QStandardItemModel(controller->records.size(), 6, this);
		table->setHorizontalHeaderItem(0, new QStandardItem(tr("Loan Date")));
		table->setHorizontalHeaderItem(1, new QStandardItem(tr("ItemID")));
		table->setHorizontalHeaderItem(2, new QStandardItem(tr("Item Name")));
		table->setHorizontalHeaderItem(3, new QStandardItem(tr("Name Of Borrower")));//admin
		table->setHorizontalHeaderItem(4, new QStandardItem(tr("Return Date")));
		table->setHorizontalHeaderItem(5, new QStandardItem(tr("Status")));//admin
		for (int i = 0; i < controller->records.size(),!controller->records.empty(); i++) {
			table->setItem(i, 0, new QStandardItem(QString::fromStdString(controller->records.at(i).getLoanDate())));
			table->setItem(i, 1, new QStandardItem(QString::fromStdString(controller->records.at(i).getId())));
			table->setItem(i, 2, new QStandardItem(QString::fromStdString(controller->records.at(i).getName())));
			table->setItem(i, 3, new QStandardItem(QString::fromStdString(controller->records.at(i).getNameOfBorrower())));
			table->setItem(i, 4, new QStandardItem(QString::fromStdString(controller->records.at(i).getReturnDate())));
			table->setItem(i, 5, new QStandardItem(QString::fromStdString(controller->records.at(i).getStatus())));
		}
		LoanRecordView->setModel(table);
		LoanRecordView->horizontalHeader()->setStretchLastSection(true);
		LoanRecordView->resizeColumnsToContents();
		LoanRecordView->setSelectionBehavior(QAbstractItemView::SelectRows);
		LoanRecordView->verticalHeader()->hide();
		LoanRecordView->setSelectionMode(QAbstractItemView::SingleSelection);
		LoanRecordView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	}
	else {

	}
	}

