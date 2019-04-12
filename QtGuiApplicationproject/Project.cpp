#include "Project.h"
#include "LoanControler.h"
#include "BorrowDialog.h"
#include "QtLoanRecordView.h"
Project::Project(QWidget *parent)
	: QMainWindow(parent)
{
	setupUi(this);
}

void Project::setLoanControler(LoanControl * args)
{
	loanControl = args;
	Welcome->setText("Welcome " + QString::fromStdString(loanControl->CurrentUser->getName()));
}
void Project::displayLoanRecord()
{
	hide();
	QtLoanRecordView test(this);
	test.initialize(loanControl, false);
	test.exec();
	show();
}
void Project::DisplayAndBorrow() {
	hide();
	BorrowDialog Dialog(this);
	Dialog.initialize(loanControl);
	Dialog.exec();
	show();
}
