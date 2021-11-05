#pragma once
#include "Person.h"
class Student:Person
{
private:
	string BirthDay;
	string Email;
	int MobileNumber = 0;

protected:


public:
	Student();
	~Student();
	void setBirthDay();
	void setEmail();
	void setMobileNumber();


};

