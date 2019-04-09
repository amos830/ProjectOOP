#ifndef LoanControler_H
#define LoanControler_H
#include <string>
#include "FileHandiler.h"
#include "User.h"
#include "Equipment.h"
#include "Struct.h"
#include "LoanRecord.h"

class LoanControl
{
public:
	bool isSucessful;
	Equipment** EquipmentList;
	User* CurrentUser;
	User** UserList;
	LoanControl();
	~LoanControl();
	EquipmentResult getEquipment(string type,bool Admin);
	void setCurrentUser(User* arg);
	int NoOfEquipments;
	int NoOfTents;
	int NoOfStoves;
	int NoOfLanterns;
	int NoOfUsers;
	void BorrowItem(std::string id);
	User* currentUser;
};
#endif
