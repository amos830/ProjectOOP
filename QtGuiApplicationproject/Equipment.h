#pragma once
#include <string>
using std::string;
class Equipment
{
protected:
	string itemID;
	string name;
	string brand;
	string type;
	string dateOfPurchase;
	string condition;
	string status;
	string itemType;
public:
	Equipment(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType);
	virtual ~Equipment()=0;
	string getItemID();
	string getName();
	string getBrand();
	string getType();
	string getDateOfPurchase();
	string getCondition();
	string getStatus();
	bool borrowItem();
	bool returnItem();
	string getItemType();
	void setCondition(string Arg);
};
class Tent
	:public Equipment {
	string color;
	int noOfPeople;
	int noOfDoor;
	bool doubleLayer;
public:
	Tent(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType,
		string Color, int NoOfPeople, int NoOfDoor, bool DoubleLayer);
	~Tent();
	int getNoOfDoor();
	int getNoOfPeople();
	bool getDoubleLayer();
	string getColor();
};
class Stove
	:public Equipment {
	string fuelType;
public:
	~Stove();
	Stove(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType,
		string FuelType);
	string getFuelType();
};
class Lantern
	:public Equipment {
	string fuelType;
	string lanternSize;
public:
	Lantern(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType,string LanternSize,
		string FuelType);
	~Lantern();
	string getFuelType();
	string getLanternSize();
};



