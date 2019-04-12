#include "User.h"





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
	return 0;
}


Scout::Scout(string userID, string name,string section,string dateOfBirth, string address, string rank):User(userID, name,section,dateOfBirth, address)
{
	this->rank = rank;
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
	return 0;
}

RScout::RScout(string userID, string name,string section,string dateOfBirth, string address) :User(userID, name, section, dateOfBirth, address)
{
}

RScout::~RScout()
{
}

int RScout::getMaxAmountOfItems()
{
	return 0;
}

VScout::VScout(string userID, string name,string section,string dateOfBirth, string address) :User(userID, name, section, dateOfBirth, address)
{
}

VScout::~VScout()
{
}

int VScout::getMaxAmountOfItems()
{
	return 0;
}

Scouter::Scouter(string userID, string name, string section,string dateOfBirth, string address, string rank) :User(userID, name, section, dateOfBirth, address)
{
	this->rank = rank;
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
	string rank = getRank();

	if (rank == "members")
		return 1;
	else
		return 3;

	return 0;
}