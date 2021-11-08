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
#include <fstream>

using namespace std;



void WriteToFile(Person pr);
Person ReadFromFile();


int main()
{
    
    
    
    Person p;
    p.setPersonData("Hamza", "Hamza111",3);
    Admin ad;
    Person newAdmin=ad.AddAdmin(&p);
    string name=newAdmin.getPersonName();
    //cout << name<<endl;
    //cout << newAdmin.getAccountType();
    /*for (int i = 0; i < 4; i++)
    {
        cout << newAdmin.getPersonData(i);
    }*/
    WriteToFile(newAdmin);
    /*Person m=ReadFromFile();
    for(int i=0;i<4;i++)
    m.getPersonData(i);*/

    
    
    
    
    return 0;
}

bool Login()
{
    return false;
}

void Logout()
{

}



void WriteToFile(Person pr)
{
    fstream file_obj;
    file_obj.seekg(0);
    file_obj.open("test.txt", ios::app);
    file_obj.write(pr.getPersonName().c_str(),pr.getPersonName().length()+1);
    file_obj.write(reinterpret_cast<char *>(&pr.getPersonPassword()), sizeof(pr.getPersonPassword()));
    file_obj.write(reinterpret_cast<char *>(& to_string(pr.getAccountType())), sizeof(pr.getAccountType()));
    file_obj.close();
    
}
Person ReadFromFile()
{
    Person pr;
    fstream file_obj;
    file_obj.open("test.txt", ios::in);
    file_obj.read((char*)&pr, sizeof(pr));
    return pr;
}