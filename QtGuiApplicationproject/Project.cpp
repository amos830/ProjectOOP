#include "Project.h"
#include "LoanControler.h"
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
