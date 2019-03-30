#include "LoanControler.h"
#include "QTLoginWindow.h"

LoanControl::LoanControl()
{
	FileHandiler::fileRead(EquipmentList, NoOfEquipments, this);
	FileHandiler::fileRead(UserList, NoOfUsers, this);
	currentUser = nullptr;
}


LoanControl::~LoanControl()
{
	for (int i = 0; i < this->NoOfEquipments; i++)
		delete EquipmentList[i];
	for (int i = 0; i < this->NoOfUsers; i++)
		delete UserList[i];
}

Equipment ** LoanControl::getEquipment(string type,bool Admin)
{
	int temp = 0;
	for (int i = 0; i < this->NoOfEquipments; i++)
		if (EquipmentList[i]->getType() == type)
			temp++;
	Equipment** Result = new Equipment*[temp];
	temp = 0;
	for (int i = 0; i < this->NoOfEquipments; i++)
		if (EquipmentList[i]->getType() == type) {
			Result[temp] = &(*EquipmentList[i]);
			temp++;
		}
	return Result;
}

void LoanControl::setCurrentUser(User * arg)
{
	currentUser = arg;
}


