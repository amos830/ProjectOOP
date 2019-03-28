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
	ThankYouDialog thank(nullptr);
	QObject::connect(&a, SIGNAL(aboutToQuit()),&thank,SLOT(activateTimer()));
	return a.exec();
}
