#include "ErrorAlert.h"
#include "LoanControler.h"
ErrorAlert::ErrorAlert(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

ErrorAlert::~ErrorAlert()
{
}

void ErrorAlert::initialize(bool terminate, QString Message,LoanControl* loancontroller)
{
	if (terminate) {
		disconnect(ConfirmButton, SIGNAL(clicked()), this, SLOT(hide()));
		connect(ConfirmButton, SIGNAL(clicked()), QCoreApplication::instance(), SLOT(exit(EXIT_FAILURE)));
		loancontroller->isSucessful = 0;
	}
	ErrorMessage->setText(Message);
}
