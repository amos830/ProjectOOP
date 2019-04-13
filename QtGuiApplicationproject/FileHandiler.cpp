#include "FileHandiler.h"
#include "QtloginWindow.h"
#include "LoanControler.h"
#include "LoanRecord.h"
#include <fstream>
#include "ErrorAlert.h"
#include <QCoreApplication>
#include <QDebug>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QVector>
#include <QList>
using std::string;
using std::fstream;



void FileHandiler::fileRead(Equipment**& List, int& Num, LoanControl* loanControler)
{
	loanControler->EquipmentList = nullptr;
	if (fileRead("camp_equipment.txt", List, Num, loanControler)) {
		ErrorAlert error;
		error.initialize(true, "Fatal Error:Base Equipment File Import Error, Please Check the File", loanControler);
		error.exec();
	}
}

int FileHandiler::fileRead(string fileLocation, Equipment **& List, int & Num, LoanControl * loanControler)
{
	for (int i = 0; i < loanControler->NoOfEquipments&&List != nullptr; i++)
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
	fileWrite("camp_equipment.txt", List, Num, loanControler);
}

int FileHandiler::fileWrite(string fileLocation, Equipment **& List, int & Num, LoanControl * loanControler)
{
	fstream TargetFile(fileLocation, std::ofstream::out);
	for (int ii = 0; ii < Num; ii++) {
		if (loanControler->EquipmentList[ii]->getType() == "tent")
			TargetFile << ((Tent*)(loanControler->EquipmentList[ii]))->getItemID() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getName() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getBrand() << "|" << "tent" << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getDateOfPurchase() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getCondition() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getStatus() << "|"<< ((Tent*)(loanControler->EquipmentList[ii]))->getNoOfPeople() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getItemType() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getNoOfDoor() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getDoubleLayer() << "|" << ((Tent*)(loanControler->EquipmentList[ii]))->getColor() << "\n";
		if (loanControler->EquipmentList[ii]->getType() == "stove")
			TargetFile << ((Stove*)(loanControler->EquipmentList[ii]))->getItemID() << "|" << ((Stove*)(loanControler->EquipmentList[ii]))->getName() << "|" << ((Stove*)(loanControler->EquipmentList[ii]))->getBrand() << "|" << "stove" << "|" << ((Stove*)(loanControler->EquipmentList[ii]))->getDateOfPurchase() << "|" << ((Stove*)(loanControler->EquipmentList[ii]))->getCondition() << "|" << ((Stove*)(loanControler->EquipmentList[ii]))->getStatus() << "|"<< ((Stove*)(loanControler->EquipmentList[ii]))->getItemType() <<"|"<< ((Stove*)(loanControler->EquipmentList[ii]))->getFuelType() << "\n";
		if (loanControler->EquipmentList[ii]->getType() == "lantern")
			TargetFile << ((Lantern*)(loanControler->EquipmentList[ii]))->getItemID() << "|" << ((Lantern*)(loanControler->EquipmentList[ii]))->getName() << "|" << ((Lantern*)(loanControler->EquipmentList[ii]))->getBrand() << "|" << "lantern" << "|" << ((Lantern*)(loanControler->EquipmentList[ii]))->getDateOfPurchase() << "|" << ((Lantern*)(loanControler->EquipmentList[ii]))->getCondition() << "|" << ((Lantern*)(loanControler->EquipmentList[ii]))->getStatus() << "|"
			<< ((Lantern*)(loanControler->EquipmentList[ii]))->getLanternSize() << "|"<<((Lantern*)(loanControler->EquipmentList[ii]))->getItemType() << "|"<<((Lantern*)(loanControler->EquipmentList[ii]))->getFuelType() << "\n";
	}
	return 0;
}

void FileHandiler::fileWrite(std::vector<LoanRecord> List)
{
	fileWrite(List, "loanrecord.txt");
}

void FileHandiler::fileWrite(std::vector<LoanRecord> List, string filelocation)
{
	fstream TargetFile(filelocation, std::ofstream::out);
	for (int ii = 0; ii< List.size()&&!List.empty(); ii++) {
		TargetFile << List.at(ii).getReturnDate() << "|"
			<< List.at(ii).getLoanDate() << "|"
			<< List.at(ii).getId() << "|"
			<< List.at(ii).getName() << "|"
			<< List.at(ii).getStatus() << "|"
			<< List.at(ii).getNameOfBorrower() << "\n";
	}
}


void FileHandiler::fileRead(LoanControl* loancontroler)
{
	fstream TargetFile;
	TargetFile.open("loanrecord.txt", std::ifstream::in);
	int Num = 0;
	string temp;
	while (getline(TargetFile, temp))
	{
		if (temp.empty())
			continue;
		else
			Num++;
	}
	TargetFile.clear();
	TargetFile.seekg(0, std::ios::beg);
	for (int i = 0; i < Num; i++)
	{
		while (getline(TargetFile, temp))
		{
			if (temp.empty())
				continue;
			else
			{
				string returnDate(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				string loanDate(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				string id(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				string name(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				string status(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				loancontroler->records.push_back(LoanRecord(name, temp, id, returnDate, loanDate, status));
			}
		}
	}
	TargetFile.close();
}


