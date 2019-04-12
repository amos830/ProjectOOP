#include "User.h"
#include "LoanControler.h"




User::User(string userID, string name,string section,string dateOfBirth, string address)
{
	this->userID = userID;
	this->name=name;
	this->section=section;
	this ->dateOfBirth=dateOfBirth;
	this->address = address;
}

User::~User()
{
}



string User::getSection() {
	return section;
}

string User::getUserID()
{
	return userID;
}

string User::getPassword()
{
	return dateOfBirth;
}

string User::getName()
{
	return name;
}

string User::getAddress()
{
	return address;
}

int User::getQuota()
{
	return quota;
}

void User::borrowItem()
{
	quota--;
}

void User::returnItem()
{
	quota++;
}


Scout::Scout(string userID, string name,string section,string dateOfBirth, string address, string rank):User(userID, name,section,dateOfBirth, address)
{
	this->rank = rank;
	quota = getMaxAmountOfItems();
}

Scout::~Scout()
{
}

string Scout::getRank()
{
	return rank;
}

int Scout::getMaxAmountOfItems()
{
	if (this->getRank() == "member"){
		return 1;
	}
	else if (this->getRank()=="Patrol Leader"|| this->getRank()=="Assistant Patrol Leader") {
		return 3;
	}
}


RScout::RScout(string userID, string name,string section,string dateOfBirth, string address) :User(userID, name, section, dateOfBirth, address)
{
	quota = getMaxAmountOfItems();
}

RScout::~RScout()
{
}

int RScout::getMaxAmountOfItems() {
	return 5;
}

VScout::VScout(string userID, string name,string section,string dateOfBirth, string address) :User(userID, name, section, dateOfBirth, address)
{
	quota = getMaxAmountOfItems();
}

VScout::~VScout()
{
}


int VScout::getMaxAmountOfItems()
{
    return 3;

}

Scouter::Scouter(string userID, string name, string section,string dateOfBirth, string address, string rank) :User(userID, name, section, dateOfBirth, address)
{
	this->rank = rank;
	quota = getMaxAmountOfItems();
}

Scouter::~Scouter()
{
}

string Scouter::getRank()
{
	return rank;
}

int Scouter::getMaxAmountOfItems()
{
	return 5;
}