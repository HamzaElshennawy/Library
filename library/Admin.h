#pragma once
#include "Person.h"
#include "Student.h"
#include "Librarian.h"
class Admin: Person
{
private:
	//Person* ps;

protected:

public:
	Admin();
	Person AddAdmin(Person *pr);
	void RemoveAdmin(Admin *ad);
	Person AddStudent(Person *pr);
	void RemoveStudent(Student *st);
	Person AddLibrarian(Person *pr);
	void RemoveLibrarian(Librarian *lb);
	void show();
	
};

