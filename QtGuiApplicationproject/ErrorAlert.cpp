#include "ErrorAlert.h"

ErrorAlert::ErrorAlert(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}

ErrorAlert::~ErrorAlert()
{
}

void ErrorAlert::initialize(bool terminate, QString Message)
{
	ErrorMessage->setText(Message);
}
