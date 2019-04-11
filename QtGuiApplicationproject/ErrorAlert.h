#pragma once

#include <QDialog>
#include "ui_ErrorAlert.h"
class LoanControl;
class ErrorAlert : public QDialog, public Ui::ErrorAlert
{
	Q_OBJECT

public:
	ErrorAlert(QWidget *parent = Q_NULLPTR);
	~ErrorAlert();
	void initialize(bool terminate, QString Message,LoanControl* loanControler);
};
