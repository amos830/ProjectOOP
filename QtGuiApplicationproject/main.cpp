#include "Project.h"
#include <QtWidgets/QApplication>
#include "QtAdminMenu.h"
#include "QTLoginWindow.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Project w;
	QTLoginWindow Menu;
	LoanControl* loanControler = new LoanControl();
	Menu.initialize(loanControler);
	Menu.show();
	//QTLoginWindow Login;
	//Login.show();
	//w.show();
	std::unique_ptr<ThankYouDialog> thank(new ThankYouDialog(nullptr));
	thank->exec();
	return a.exec();
}