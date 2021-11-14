#pragma once
#include "Person.h"
#include "Student.h"
#include "Librarian.h"
class Admin: public Person
{
private:
	//Person* ps;
	static int AdminID;
	static vector<Person> AllAdmins;
	static vector<Person>AllStudents;
	static vector<Person>AllLibrarians;
protected:

public:
	Admin(int level);
	Admin();
	void AddAdmin(string AName,string APassword);
	void RemoveAdmin(string AName);
	void AddStudent(string SName,string SPassword, string SEmail,string SBD);//SBD=student birthday
	void RemoveStudent(string SName);
	void AddLibrarian(string LName,string LPassword);
	void RemoveLibrarian(string LName);
	void show();
	vector<Person> ReturnAdmins();
	vector<Person> ReturnStudents();
	vector<Person> ReturnLibrarians();
};

