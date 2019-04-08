#pragma once

#include <QDialog>
#include "ui_BorrowDialog.h"
#include "Struct.h"
#include <QStandardItemModel>
class LoanControl;
class BorrowDialog : public QDialog, public Ui::BorrowDialog
{
	Q_OBJECT

public:
	LoanControl* loanController;
	QStandardItemModel* tentTable;
	QStandardItemModel* stoveTable;
	QStandardItemModel* lanternTable;
	Equipment** tents;
	Equipment** stoves;
	Equipment** lanterns;
	BorrowDialog(QWidget *parent = Q_NULLPTR);
	~BorrowDialog();
	void initialize(LoanControl* arg);
	void updateTable();
};
