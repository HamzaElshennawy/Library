#include <iostream>
#include "Student.h"


using namespace std;

int Student::StudentID = 0;

Student::Student()
{
	StudentID++;
}
Student::Student(string SBD)
{
	StudentID++;
	BirthDay = SBD;
}
Student::Student(int level)
{
	StudentID++;
	setAccountType(level);
}

void Student::setBirthDay(string BD)
{
	BirthDay = BD;
}

void Student::setEmail(string email)
{
	Email = email;
}

void Student::setMobileNumber(string mobile)
{
	MobileNumber = mobile;
}

string Student::getStudentName()
{
	return getPersonName();
}

string Student::getStudentBD()
{
	return BirthDay;
}

string Student::getMobileNumber()
{
	return MobileNumber;
}
string Student::getStudentEmail()
{
	return Email;
}