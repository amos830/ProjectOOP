#ifndef LoanControler_H
#define LoanControler_H
#include <string>
#include "FileHandiler.h"
#include "User.h"
#include "Equipment.h"
class LoanControl
{
public:
	Equipment** EquipmentList;
	User* CurrentUser;
	User** UserList;
	LoanControl();
	~LoanControl();
	Equipment ** getEquipment(string type,bool Admin);
	void setCurrentUser(User* arg);
	int NoOfEquipments;
	int NoOfTents;
	int NoOfStoves;
	int NoOfLanterns;
	int NoOfUsers;
	User* currentUser;
};
#endif
