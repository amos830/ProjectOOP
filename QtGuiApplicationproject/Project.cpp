#include "Project.h"
#include "LoanControler.h"
#include "BorrowDialog.h"
Project::Project(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
}

void Project::setLoanControler(LoanControl * arg)
{
	loanControl = arg;
	Welcome->setText("Welcome " + QString::fromStdString(loanControl->currentUser->getName()));
}
void Project::DisplayAndBorrow() {
	hide();
	BorrowDialog Dialog(this);
	Dialog.initialize(loanControl);
	Dialog.exec();
	show();
}
