#ifndef FILEHANDILER_H
#define FILEHANDILER_H
#include <string>
#include "User.h"
#include "Equipment.h"
using std::string;
class LoanControl;
class FileHandiler
{
public:
	static void fileRead(Equipment**& List, int& Num, LoanControl* loanControler);//Read default equipment file
	static int fileRead(string fileLocation, Equipment**& List, int& Num, LoanControl* loanControler);//Read custom equipment file
	static void fileRead(User**& List, int&Num, LoanControl* loanControler);
	static int fileRead(string fileLocation, User**& List, int& Num, LoanControl* loanControler);
};

#endif

