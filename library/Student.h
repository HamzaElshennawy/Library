#pragma once
#include "Person.h"
class Student:public Person
{
private:
	static int StudentID;
	string BirthDay;
	string Email;
	string MobileNumber;

protected:


public:
	Student();
	Student(string SBD);
	Student(int level);
	void setBirthDay(string BD);
	void setEmail(string email);
	void setMobileNumber(string mobile);
	string getStudentName();
	string getStudentBD();
	string getMobileNumber();
	string getStudentEmail();
};

