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
	string getReturnDate();
	string getLoanDate();
	string getId();
	string getName();
	string getStatus();
	string getNameOfBorrower();
	void setReturnDate();
	void setStatus(string status);
	LoanRecord(string name, string nameOfBorrower, string id);
	~LoanRecord();
};
#endif