#include <iostream>
#include "Student.h"


using namespace std;



Student::Student()
{
	
}
Student::Student(string SBD)
{
	BirthDay = SBD;
}
Student::Student(int level)
{
	setAccountType(level);
}
Student::~Student()
{

}

void Student::setBirthDay()
{
}

void Student::setEmail()
{

}

void Student::setMobileNumber()
{

}
