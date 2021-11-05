#pragma once
#include <string>
#include <list>
using namespace std;
class Person
{
private:
	static int PersonID;//auto made id in the constractor
	int accountType=3;//Defult as student ..... 1- for admins 2-for librarians 3- for students.
	string name;
	string password;
protected:

public:
	Person();
	void setPersonName(string PersonName);
	void setPersonPassword(string PersonPassword);
	void setAccountType(int level);
	void setPersonData(string PersonName, string PersonPassword,int AccountType);
	int getAccountType();
	string getPersonName();
	string getPersonPassword();
	string getPersonData();  //this function will return string array contains (id,name,password,account type(who will be effected from drived classes)) 
							 //[0]=ID, [1]= Name, [2], Password, [3]=Account Type
};

