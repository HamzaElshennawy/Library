#include <iostream>
#include "Admin.h"
#include "Book.h"
#include "IssuedBooks.h"
#include "Librarian.h"
#include "Person.h"
#include "Student.h"
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <string>
#include <fstream>
#include "Login.h"

using namespace std;



void WriteToFile(Person pr);
//bool IsValid(string user, string pass);
//int Login();
//void Logout();



Person ReadFromFile();
bool logedin = false;

int main()
{
    
    int choice = 0;
    
    int type = 1;//same from person account type
    system("cls");
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\t\tWelcome to library system\n";
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\tPlease Login to be able to use this application.";
    
    login();
    
    switch (type)
    {
    case 1:
        
        break;
    case 2:

        break;
    case 3:

        break;
    default:

        cout << "Something went wrong with error code 1001";
        break;
    }

    
    
    return 0;
}

//int Login()
//{
//    if (IsValid)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//void Logout()
//{
//
//}



void WriteToFile(Person pr)
{
    fstream file_obj;
    string PersonAccountType = to_string(pr.getAccountType());
    string PersonIDD = to_string(pr.getPersonID());
    file_obj.seekg(0);
    file_obj.open("test.txt", ios::app);
    file_obj.write(pr.getPersonName().c_str(), pr.getPersonName().length() + 1);
    file_obj.write(pr.getPersonPassword().c_str(), pr.getPersonPassword().length()+1);
    //file_obj.write(PersonAccountType.c_str(), PersonAccountType.length() + 1);
    //file_obj.write(PersonIDD.c_str(), PersonIDD.length() + 1);
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



//bool IsValid(string user, string pass)
//{
//
//
//
//
//
//
//
//    return true;
//}
