#include "Person.h"
int Person::PersonID = 0;

Person::Person() 
{
	PersonID++;
}


void Person::setPersonName(string PersonName)
{
	name = PersonName;
}

void Person::setPersonPassword(string PersonPassword)
{
	password = PersonPassword;
}

void Person::setAccountType(int level)
{
	accountType = level;
}

void Person::setPersonData(string PersonName, string PersonPassword,int AccountType)
{
	name = PersonName;
	password = PersonPassword;
	accountType = AccountType;
}

int Person::getAccountType()
{
	return accountType;
}

string Person::getPersonName()
{
	return name;
}

string Person::getPersonPassword()
{
	return password;
}



string Person::getPersonData()
{
	string id= to_string(PersonID);
	string PersonData[4];
	PersonData[0] = PersonID;
	PersonData[1] = name;
	PersonData[2] = password;
	PersonData[3] = accountType;
	return PersonData[0];
}
