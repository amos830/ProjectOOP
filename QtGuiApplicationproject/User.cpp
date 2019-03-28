#include "User.h"





User::User(string userID, string name, string dateOfBirth, string address)
{
	this->userID = userID;
	this->name=name;
	this ->dateOfBirth=dateOfBirth;
	this->address = address;
}

User::~User()
{
}

string User::getUserID()
{
	return string();
}

string User::getPassword()
{
	return string();
}

string User::getName()
{
	return string();
}

string User::getAddress()
{
	return string();
}


Scout::Scout(string userID, string name, string dateOfBirth, string address, string rank):User(userID, name, dateOfBirth, address)
{
	this->rank = rank;
}

Scout::~Scout()
{
}

string Scout::getRank()
{
	return string();
}

RScout::RScout(string userID, string name, string dateOfBirth, string address) :User(userID, name, dateOfBirth, address)
{
}

RScout::~RScout()
{
}

VScout::VScout(string userID, string name, string dateOfBirth, string address) :User(userID, name, dateOfBirth, address)
{
}

VScout::~VScout()
{
}

Scouter::Scouter(string userID, string name, string dateOfBirth, string address, string rank) :User(userID, name, dateOfBirth, address)
{
	this->rank = rank;
}

Scouter::~Scouter()
{
}

string Scouter::getRank()
{
	return string();
}
