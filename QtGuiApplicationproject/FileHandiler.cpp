#include "FileHandiler.h"
#include "QtloginWindow.h"
#include "LoanControler.h"
#include <fstream>
#include "ErrorAlert.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
using std::fstream;



void FileHandiler::fileRead(Equipment**& List, int& Num,LoanControl* loanControler)
{
	loanControler->EquipmentList = nullptr;
	if (fileRead("camp_equipment.txt", List, Num, loanControler)) {
		ErrorAlert error;
		error.initialize(true, "Fatal Error:Base Equipment File Import Error, Please Check the File",loanControler);
		error.exec();
	}
}

int FileHandiler::fileRead(string fileLocation, Equipment **& List, int & Num, LoanControl * loanControler)
{
	for (int i = 0; i < loanControler->NoOfEquipments&&List!=nullptr; i++)
		delete List[i];
	Num = 0;
	loanControler->NoOfTents = 0;
	loanControler->NoOfStoves = 0;
	loanControler->NoOfLanterns = 0;
	string temp;
	fstream TargetFile(fileLocation, std::ifstream::in);
	while (getline(TargetFile, temp))
		if (temp.empty())
			continue;
		else
			Num++;
	List = new Equipment*[Num];
	TargetFile.clear();
	TargetFile.seekg(0, std::ios::beg);
	for (int i = 0; i < Num; i++) {
		string temp;
		do {
			getline(TargetFile, temp);
		} while (temp.empty());
		string code(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string name(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string brand(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string type(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string dOP(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string condition(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string status(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		if (type == "tent")
		{
			int people = stoi(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			string tentType(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			int doors = stoi(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			bool layer = temp.substr(0, temp.find("|")) == "true" ? 1 : 0;
			temp.erase(0, temp.find("|") + 1);
			Tent* tempInstance = new Tent(code, name, brand, type, dOP, condition, status, tentType, temp, people, doors, layer);
			List[i] = &*tempInstance;
			loanControler->NoOfTents++;
		}
		else {
			string itemType(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			if (type == "stove") {
				List[i] = new Stove(code, name, brand, type, dOP, condition, status, itemType, temp);
				loanControler->NoOfStoves++;
			}
			else if (type == "lantern") {
				string lanternSize(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				List[i] = new Lantern(code, name, brand, type, dOP, condition, status, itemType, lanternSize, temp);
				loanControler->NoOfLanterns++;
			}
			else return 1;
		}
	}
	return 0;
}

void FileHandiler::fileRead(User **& List, int & Num, LoanControl * loanControler)
{
	loanControler->UserList = nullptr;
	fileRead("user.txt", List, Num, loanControler);
}

int FileHandiler::fileRead(string fileLocation, User **& List, int & Num, LoanControl * loanControler)
{
	Num = 0;
	for (int i = 0; i < loanControler->NoOfUsers; i++)
		delete List[i];
	string temp;
	fstream TargetFile(fileLocation, std::ifstream::in);
	while (getline(TargetFile, temp))
		if (temp.empty())
			continue;
		else
			Num++;
	List = new User*[Num];
	TargetFile.clear();
	TargetFile.seekg(0, std::ios::beg);
	for (int i = 0; i < Num; i++) {
		string temp;
		do {
			getline(TargetFile, temp);
		} while (temp.empty());
		string ID(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string name(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string section(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		string dob(temp.substr(0, temp.find("|")));
		temp.erase(0, temp.find("|") + 1);
		if (ID.substr(0, 3) == "SCT")
		{
			string address(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			List[i] = new Scout(ID, name, section, dob, address, temp);
		}
		else if (ID.substr(0, 3) == "SCM")
		{
			string address(temp.substr(0, temp.find("|")));
			temp.erase(0, temp.find("|") + 1);
			List[i] = new Scouter(ID, name, section, dob, address, temp);
		}
		else if (ID.substr(0, 3) == "VEN")
		{
			List[i] = new VScout(ID, name, section, dob, temp);
		}
		else if (ID.substr(0, 3) == "ROV")
		{
			List[i] = new RScout(ID, name, section, dob, temp);
		}
		else return 1;
	}
	return 0;
}

void FileHandiler::fileWrite(Equipment **& List, int & Num, LoanControl * loanControler)
{
}

int FileHandiler::fileWrite(string fileLocation, Equipment **& List, int & Num, LoanControl * loanControler)
{
	return 0;
}

void FileHandiler::fileWrite(std::shared_ptr<LoanRecord> List)
{
	
}

int FileHandiler::fileWrite(std::shared_ptr<LoanRecord> List, string fileLocation)
{
	return 0;
}

void FileHandiler::fileRead()
{
	QFile loanRecordFile("LoanRecord.json");
	if(!loanRecordFile.open(QIODevice::ReadOnly))	
		return;
}




