#include <iostream>
#include "Admin.h"
#include "Book.h"
#include "IssuedBooks.h"
#include "Librarian.h"
#include "Person.h"
#include "Student.h"
#include "library.h"
using namespace std;
int main()
{
    
    
    
    Person p;
    p.setPersonData("Hamza", "Hamza111",3);
    //string arr= p.getPersonData();
    //cout << arr;
    Admin ad;
    Person newAdmin=ad.AddAdmin(&p);
    string name=newAdmin.getPersonName();
    cout << name<<endl;
    cout << newAdmin.getAccountType();
    //Admin a=ad.AddAdmin(p);
    
    //int test=p.getAccountType();
    
    //cout << test;
    
    
    
    
    
    
    return 0;
}

bool Login()
{
    return false;
}

void Logout()
{

}

