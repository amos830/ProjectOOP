#pragma once

#include <QDialog>
#include "ui_QtLoanRecordView.h"

class QtLoanRecordView : public QDialog, public Ui::QtLoanRecordView
{
	Q_OBJECT

public:
	LoanControl* controller;
	QtLoanRecordView(QWidget *parent = Q_NULLPTR);
	~QtLoanRecordView();
	void initialize(LoanControl* arg);
};
