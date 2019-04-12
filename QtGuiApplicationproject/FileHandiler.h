#ifndef FILEHANDILER_H
#define FILEHANDILER_H
#include <string>
#include "User.h"
#include "Equipment.h"
#include "LoanRecord.h"
#include <memory>
#include <vector>
using std::string;
class LoanControl;
class FileHandiler
{
public:
	static void fileRead(Equipment**& List, int& Num, LoanControl* loanControler);//Read default equipment file
	static int fileRead(string fileLocation, Equipment**& List, int& Num, LoanControl* loanControler);//Read custom equipment file
	static void fileRead(User**& List, int&Num, LoanControl* loanControler);
	static int fileRead(string fileLocation, User**& List, int& Num, LoanControl* loanControler);
	static void fileWrite(Equipment**& List, int& Num, LoanControl* loanControler);
	static int fileWrite(string fileLocation, Equipment**& List, int& Num, LoanControl* loanControler);
	static void fileWrite(std::vector<LoanRecord> List);
	static void fileWrite(std::vector<LoanRecord> List,string filelocation);
	static void fileRead(LoanControl* loancontroler);
};

#endif

