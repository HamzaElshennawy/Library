#include "Admin.h"
#include <iostream>
using namespace std;

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
Person Admin::AddAdmin(Person *pr)
{
	pr->setAccountType(1);
	return *pr;
}

void Admin::RemoveAdmin(Admin *ad)
{
	delete ad;
}

Person Admin::AddStudent(Person *pr)
{
	pr->setAccountType(3);
	return *pr;
}

void Admin::RemoveStudent(Student *st)
{
	delete st;
}

Person Admin::AddLibrarian(Person *pr)
{
	pr->setAccountType(2);
	return *pr;
}

void Admin::RemoveLibrarian(Librarian *lb)
{
	delete lb;
}

void Admin::show()
{
	int t= getAccountType();
	cout << t;
}