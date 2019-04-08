#include "LoanRecord.h"
#include "Equipment.h"
#include "User.h"
#include <QDate>


string LoanRecord::getReturnDate()
{
	return returnDate;
}

string LoanRecord::getLoanDate()
{
	return loanDate;
}

string LoanRecord::getId()
{
	return id;
}

string LoanRecord::getName()
{
	return name;
}

string LoanRecord::getStatus()
{
	return status;
}

string LoanRecord::getNameOfBorrower()
{
	return nameOfBorrower;
}

void LoanRecord::setReturnDate()
{
	QString temp = QDate::currentDate().toString("dd.MM.yyyy");

	returnDate = temp.toStdString();
}


void LoanRecord::setStatus(string status)
{
	this->status = status;
}

LoanRecord::LoanRecord(string name, string nameOfBorrower, string id)
{
	QString temp = QDate::currentDate().toString("dd.MM.yyyy");

	loanDate = temp.toStdString();
	this->name = name;
	this->nameOfBorrower = nameOfBorrower;
	this -> id = id;
	returnDate = "";
	status = "out";

}

LoanRecord::~LoanRecord()
{

}
