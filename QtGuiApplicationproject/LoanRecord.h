#include <string>
using std::string;
#ifndef LoanRecord_H
#define LoanRecord_H
class LoanRecord {
	string loanDate;
	string id;
	string name;
	string nameOfBorrower;
	string returnDate;
	string status;
public:
	//getter
	string getReturnDate();
	string getLoanDate();
	string getId();
	string getName();
	string getStatus();
	string getNameOfBorrower();
	//setter
	void setReturnDate();
	void setStatus(string status);
	//constructor
	LoanRecord(string name, string nameOfBorrower, string id);
	//destructor
	~LoanRecord();
};
#endif
