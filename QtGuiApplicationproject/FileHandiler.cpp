#include "FileHandiler.h"
#include "QtloginWindow.h"
#include "LoanControler.h"
#include <fstream>

using std::fstream;



void FileHandiler::fileRead(Equipment**& List, int& Num,LoanControl* loanControler)
{
	loanControler->EquipmentList = nullptr;
	fileRead("camp_equipment.txt", List, Num, loanControler);
}

void FileHandiler::fileRead(string fileLocation, Equipment **& List, int & Num, LoanControl * loanControler)
{
	for (int i = 0; i < loanControler->NoOfEquipments; i++)
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
			else {
				string lanternSize(temp.substr(0, temp.find("|")));
				temp.erase(0, temp.find("|") + 1);
				List[i] = new Lantern(code, name, brand, type, dOP, condition, status, itemType, lanternSize, temp);
				loanControler->NoOfLanterns++;
			}
		}
	}
}

void FileHandiler::fileRead(User **& List, int & Num, LoanControl * loanControler)
{
}

void FileHandiler::fileRead(string fileLocation, User **& List, int & Num, LoanControl * loanControler)
{
}


