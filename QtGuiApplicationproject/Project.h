#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project.h"
class LoanControl;
class Project : public QMainWindow,public Ui::ProjectClass
{
	Q_OBJECT

public:
	Project(QWidget *parent = Q_NULLPTR);
	void setLoanControler(LoanControl* arg);
private:
	LoanControl* loanControl;
};
