#pragma once
#include <string>
using std::string;
class User
{
protected:
	string userID;
	string name;
	string dateOfBirth;
	string section;
	string address;
	int quota;
public:
	static int NoOfUsers;
		User(string userID,string name,string section,string dateOfBirth,string address);
		virtual ~User();
		string getUserID();
		string getPassword();
		string getName();
		string getAddress();
};
class Scout
	:public User
{
	string rank;
public:
	Scout(string userID, string name,string section,string dateOfBirth, string address,string rank);
	~Scout();
	string getRank();
};
class RScout
	:public User
{
public:
	RScout(string userID, string name,string section,string dateOfBirth, string address);
	~RScout();
};
class VScout
	:public User
{
public:
	VScout(string userID, string name, string section,string dateOfBirth, string address);
	~VScout();
};
class Scouter
	:public User
{
	string rank;
public:
	Scouter(string userID, string name,string section,string dateOfBirth, string address,string rank);
	~Scouter();
	string getRank();
};

