#include "Equipment.h"





void Equipment::setCondition(string Arg)
{
	condition = Arg;
}

Equipment::Equipment(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType)
{
		itemID=ItemID;
		name=Name; 
		brand=Brand;
		type=Type; 
		dateOfPurchase=DateOfPurchase; 
		condition=Condition; 
		status=Status; 
		itemType=ItemType;
}

Equipment::~Equipment()
{
}

string Equipment::getItemID()
{
	return itemID;
}

string Equipment::getName()
{
	return name;
}

string Equipment::getBrand()
{
	return brand;
}

string Equipment::getType()
{
	return type;
}

string Equipment::getDateOfPurchase()
{
	return dateOfPurchase;
}

string Equipment::getCondition()
{
	return condition;
}

string Equipment::getStatus()
{
	return status;
}

void Equipment::setStatus(string status)
{
	this->status = status;
}

bool Equipment::borrowItem()
{
	return false;
}

bool Equipment::returnItem()
{
	return false;
}

string Equipment::getItemType()
{
	return itemType;
}
Tent::Tent(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType, string Color, int NoOfPeople, int NoOfDoor, bool DoubleLayer) :Equipment(ItemID, Name, Brand, Type, DateOfPurchase, Condition, Status, ItemType)
{
	color = Color;
	noOfPeople = NoOfPeople;
	noOfDoor = NoOfDoor;
	doubleLayer = DoubleLayer;
}

Tent::~Tent()
{
}

int Tent::getNoOfDoor()
{
	return noOfDoor;
}

int Tent::getNoOfPeople()
{
	return noOfPeople;
}

bool Tent::getDoubleLayer()
{
	return doubleLayer;
}

string Tent::getColor()
{
	return color;
}


Stove::Stove(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType, string FuelType):Equipment(ItemID, Name, Brand, Type, DateOfPurchase, Condition, Status, ItemType)
{
	fuelType = FuelType;
}

Stove::~Stove()
{
}

string Stove::getFuelType()
{
	return fuelType;
}

Lantern::Lantern(string ItemID, string Name, string Brand, string Type, string DateOfPurchase, string Condition, string Status, string ItemType,string LanternSize,string FuelType):Equipment(ItemID, Name, Brand, Type, DateOfPurchase, Condition, Status, ItemType)
{
	lanternSize = LanternSize;
	fuelType = FuelType;
}

Lantern::~Lantern()
{
}

string Lantern::getFuelType()
{
	return fuelType;
}

string Lantern::getLanternSize()
{
	return lanternSize;
}
