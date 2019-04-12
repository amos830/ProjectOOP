#ifndef LoanControler_H
#define LoanControler_H
#include <string>
#include "FileHandiler.h"
#include "User.h"
#include "Equipment.h"
#include "Struct.h"
#include "LoanRecord.h"
#include <vector>
#include <memory>
class LoanControl
{
public:
	static bool isSucessful;
	Equipment** EquipmentList;
	User* CurrentUser;
	User** UserList;
	LoanControl();
	~LoanControl();
	EquipmentResult getEquipment(string type,bool Admin);
	Equipment* get1Equipment(string ID);
	void setCurrentUser(User* arg);
	int NoOfEquipments;
	int NoOfTents;
	int NoOfStoves;
	int NoOfLanterns;
	int NoOfUsers;
	bool BorrowItem(std::string id);
	LoanRecord* findLoanRecordItem(string ID,string name);
	Equipment * findEquipmentByID(string ID);
	bool BorrowItems(std::vector<std::string> list);
	void LoanControl::ReturnItem(string id,string name);
	std::vector<LoanRecord> records;
	int amountBorrowed();
	static bool compareLoanRecords(LoanRecord loan1,LoanRecord loan2);
};
#endif
