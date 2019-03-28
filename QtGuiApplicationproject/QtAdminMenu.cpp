#include "QtAdminMenu.h"
#include "QtItemMenu.h"
#include "ImportequipmentMenu.h"
QtAdminMenu::QtAdminMenu(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
}

QtAdminMenu::~QtAdminMenu()
{
}

void QtAdminMenu::initialize(LoanControl * arg)
{
	loanControler = arg;
}

void QtAdminMenu::importCampEquipment()
{
	this->hide();
	ImportequipmentMenu menu(this);
	menu.initialize(this);
	menu.exec();
	this->show();
}

void QtAdminMenu::exportCampEquipment()
{
}

void QtAdminMenu::exportLoanRecords()
{
}

void QtAdminMenu::displayLoanRecords()
{
}

void QtAdminMenu::importUsers()
{
}

void QtAdminMenu::displayEquipmentAdmin() {
	this->hide();
	QTItemMenu* EquipmentMenu = new QTItemMenu(this);
	EquipmentMenu->initialize(loanControler);
	EquipmentMenu->exec();
	this->show();
}