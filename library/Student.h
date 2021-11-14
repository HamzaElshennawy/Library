#pragma once
#include "Person.h"
class Student:public Person
{
private:
	string BirthDay;
	string Email;
	int MobileNumber = 0;

protected:


public:
	Student();
	Student(string SBD);
	Student(int level);
	~Student();
	void setBirthDay();
	void setEmail();
	void setMobileNumber();


};

