#pragma once
#include "Person.h"
#include "Student.h"
#include "Librarian.h"
class Admin: public Person
{
private:
	//Person* ps;
	static int AdminID;
protected:

public:
	Admin(int level);
	Admin();
	Person AddAdmin(Person *pr);
	void RemoveAdmin(Admin *ad);
	Person AddStudent(Person *pr);
	void RemoveStudent(Student *st);
	Person AddLibrarian(Person *pr);
	void RemoveLibrarian(Librarian *lb);
	void show();
	
};

