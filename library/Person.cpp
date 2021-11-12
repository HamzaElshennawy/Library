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

string Person::getPersonData(int i)
{
	string id= to_string(PersonID);
	
	PersonData[0] = to_string(PersonID);
	PersonData[1] = name;
	PersonData[2] = password;
	PersonData[3] = to_string(accountType);
	return PersonData[i];
}
int Person::getPersonID()
{
	return PersonID;
}
