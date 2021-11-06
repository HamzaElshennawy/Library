#include <iostream>
#include "Admin.h"
#include "Book.h"
#include "IssuedBooks.h"
#include "Librarian.h"
#include "Person.h"
#include "Student.h"
#include "library.h"
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;
int main()
{
    
    
    
    Person p;
    p.setPersonData("Hamza", "Hamza111",3);
    Admin ad;
    Person newAdmin=ad.AddAdmin(&p);
    string name=newAdmin.getPersonName();
    cout << name<<endl;
    cout << newAdmin.getAccountType();
    
    
    
    
    
    return 0;
}

bool Login()
{
    return false;
}

void Logout()
{

}

