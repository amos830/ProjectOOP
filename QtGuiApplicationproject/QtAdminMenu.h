#pragma once

#include <QMainWindow>
#include "ui_QtAdminMenu.h"
#include "LoanControler.h"

class QtAdminMenu : public QMainWindow, public Ui::QtAdminMenu
{
	Q_OBJECT

public:
	QtAdminMenu(QWidget *parent = Q_NULLPTR);
	~QtAdminMenu();
	LoanControl* loanControler;
	void initialize(LoanControl* arg);
public slots:
	void displayEquipmentAdmin();
	void importCampEquipment();
	void exportCampEquipment();
	void exportLoanRecords();
	void displayLoanRecords();
	void importUsers();
};
