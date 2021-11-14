#include "Admin.h"
#include <iostream>
using namespace std;
vector<Person> Admin::AllAdmins;
vector<Person> Admin::AllLibrarians;
vector<Person> Admin::AllStudents;
int Admin::AdminID = 0;
/*Admin::Admin(Admin* ad)
{


	ad->setAccountType(1);
}*/
Admin::Admin(int level)
{
	AdminID++;
	setPersonName("");
	setPersonPassword("");
	setAccountType(level);
}
Admin::Admin()
{
	AdminID++;
	setAccountType(1);
}
void Admin::AddAdmin(string AName,string APassword)
{
	Person* temp = new Admin(1);
	temp->setPersonName(AName);
	temp->setPersonPassword(APassword);
	temp->setAccountType(1);
	AllAdmins.push_back(*temp);
}

void Admin::RemoveAdmin(string AName)
{
	int counter = 0;
	for (auto it : AllAdmins)
	{
		
		if (it.getPersonName() == AName)
		{
			AllAdmins.erase(AllAdmins.begin()+counter);
			break;
		}
		counter++;
	}
}

void Admin::AddStudent(string SName, string SPassword, string SEmail, string SBD)
{
	Person* temp = new Student(SBD);
	temp->setPersonName(SName);
	temp->setPersonPassword(SPassword);
	temp->setAccountType(3);
	AllStudents.push_back(*temp);
}

void Admin::RemoveStudent(string SName)
{
	int counter = 0;
	for (auto it : AllStudents)
	{
		if (it.getPersonName() == SName)
		{
			AllStudents.erase(AllStudents.begin() + counter);
			break;
		}
		counter++;
	}
}

void Admin::AddLibrarian(string LName,string LPassword)
{
	Person* temp = new Librarian();
	temp->setPersonName(LName);
	temp->setPersonPassword(LPassword);
	temp->setAccountType(2);
	AllLibrarians.push_back(*temp);
}

void Admin::RemoveLibrarian(string LName)
{
	int counter = 0;
	for (auto it : AllLibrarians)
	{
		if (it.getPersonName() == LName)
		{
			AllLibrarians.erase(AllLibrarians.begin() + counter);
			break;
		}
		counter++;
	}
	
}

void Admin::show()
{
	int t= getAccountType();
	cout << t;
}

vector<Person> Admin::ReturnAdmins()
{
	return AllAdmins;
}
vector<Person> Admin::ReturnStudents()
{
	return AllStudents;
}
vector<Person> Admin::ReturnLibrarians()
{
	return AllLibrarians;
}
