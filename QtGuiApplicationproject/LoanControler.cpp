#include "LoanControler.h"
#include "QTLoginWindow.h"

LoanControl::LoanControl()
{
	FileHandiler::fileRead(EquipmentList, NoOfEquipments, this);
}


LoanControl::~LoanControl()
{
	for (int i = 0; i < this->NoOfEquipments; i++)
		delete EquipmentList[i];
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


