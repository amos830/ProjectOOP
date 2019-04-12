#include "LoanControler.h"
#include "QTLoginWindow.h"
#include "LoanRecord.h"
#include <QDate>
bool LoanControl::isSucessful = true;
LoanControl::LoanControl()
{
	FileHandiler::fileRead(EquipmentList, NoOfEquipments, this);
	FileHandiler::fileRead(UserList, NoOfUsers, this);
	//std::sort(records->begin(), records->end(), LoanControl::compareLoanRecords);
	CurrentUser = nullptr;
}


LoanControl::~LoanControl()
{
	for (int i = 0; i < this->NoOfEquipments; i++)
		delete EquipmentList[i];
	for (int i = 0; i < this->NoOfUsers; i++)
		delete UserList[i];
}

EquipmentResult LoanControl::getEquipment(string type,bool Admin)
{
	EquipmentResult results;
	results.size = 0;
	for (int i = 0; i < this->NoOfEquipments; i++)
		if ((type==""||(EquipmentList[i]->getType() == type))&&(Admin||(EquipmentList[i]->getCondition()=="good" && EquipmentList[i]->getStatus()=="in")))
			results.size++;
	results.List = new Equipment*[results.size];
	int temp = 0;
	for (int i = 0; i < this->NoOfEquipments; i++)
		if ((type == "" || (EquipmentList[i]->getType() == type)) && (Admin || (EquipmentList[i]->getCondition() == "good" && EquipmentList[i]->getStatus() == "in"))) {
			results.List[temp]= &(*EquipmentList[i]);
			temp++;
		}
	return results;
}

Equipment * LoanControl::get1Equipment(string ID)
{
	for (int i = 0; i < NoOfEquipments; i++)
		{
		if (EquipmentList[i]->getItemID() == ID)
			return EquipmentList[i];
		}
	return nullptr;
}



void LoanControl::setCurrentUser(User * arg)
{
	CurrentUser = arg;
}

bool LoanControl::BorrowItem(string id)
{
	Equipment* item = get1Equipment(id);
	string name = item->getName();
	string nameOfBorrower = CurrentUser->getName();
	records.push_back(LoanRecord(name, nameOfBorrower, id));
	CurrentUser->borrowItem();
	findEquipmentByID(id)->setStatus("out");
	return 0;
}
LoanRecord* LoanControl::findLoanRecordItem(string ID,string name)
{
	for (LoanRecord &record : records)
		if (record.getId() == ID && record.getNameOfBorrower() == name && record.getStatus()=="out")
			return &record;
	return nullptr;
}

Equipment* LoanControl::findEquipmentByID(string ID) {
	for (int i = 0; i < NoOfEquipments; i++)
		if (EquipmentList[i]->getItemID() == ID)
			return EquipmentList[i];
	return nullptr;
}

bool LoanControl::BorrowItems(std::vector<std::string> list)
{
	if (list.size() > CurrentUser->getQuota())
		return 1;
	for(int i=0;i<list.size();i++)
		BorrowItem(list.at(i));
	return 0;
}

void LoanControl::ReturnItem(string id, string name) {
	findLoanRecordItem(id, name)->setReturnDate();
	findLoanRecordItem(id, name)->setStatus("returned");
	findEquipmentByID(id)->setStatus("in");
	CurrentUser->returnItem();
}

int LoanControl::amountBorrowed()
{
	int result = 0;
	for (int i = 0; i < records.size(); i++)
		if (records.at(i).getName() == CurrentUser->getName() && records.at(i).getStatus() == "out")
			result++;
	return result;
}

bool LoanControl::compareLoanRecords(LoanRecord loan1, LoanRecord loan2) //comparator
{
	if (QDate::fromString(QString::fromStdString(loan1.getLoanDate()), "ddMMyyyy") == QDate::fromString(QString::fromStdString(loan2.getLoanDate())))
		return std::stoi(loan1.getId().substr(1, 3)) < std::stoi(loan2.getId().substr(1, 3));
	else return QDate::fromString(QString::fromStdString(loan1.getLoanDate()), "ddMMyyyy") < QDate::fromString(QString::fromStdString(loan2.getLoanDate()));
}




