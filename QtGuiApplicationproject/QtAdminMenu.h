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
	void keyPressEvent(QKeyEvent * event)	override;
	void focusGoRight(bool reverse);
	void focusGoDown(bool reverse);
	bool eventFilter(QObject *object, QEvent *event) override;
	bool keyboardmode;
public slots:
	void displayEquipmentAdmin();
	void importCampEquipment();
	void exportCampEquipment();
	void exportLoanRecords();
	void displayLoanRecords();
	void importUsers();
private:
	QPushButton*** Layout;
	int x;
	int y;
};
