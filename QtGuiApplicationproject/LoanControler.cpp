#include "LoanControler.h"
#include "QTLoginWindow.h"
#include "LoanRecord.h"

LoanControl::LoanControl()
{
	isSucessful = 1;
	FileHandiler::fileRead(EquipmentList, NoOfEquipments, this);
	FileHandiler::fileRead(UserList, NoOfUsers, this);
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
	records->push_back(LoanRecord(name, nameOfBorrower, id));
	return 0;
}

bool LoanControl::BorrowItems(std::vector<std::string> list)
{
	if (list.size() > CurrentUser->getQuota())
		return 1;
	for each (std::string item in list) {
		BorrowItem(item);
	}
}




