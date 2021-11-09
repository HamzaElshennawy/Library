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

using namespace std;



string username;
int login();



void WriteToFile(Person pr);


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
    int level = login();
    if (level == 3)
    {
        cout << "done";
    }
    
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

//
//void WriteToFile(Person pr)
//{
//    fstream file_obj;
//    string PersonAccountType = to_string(pr.getAccountType());
//    string PersonIDD = to_string(pr.getPersonID());
//    file_obj.seekg(0);
//    file_obj.open("test.txt", ios::app);
//    file_obj.write(pr.getPersonName().c_str(), pr.getPersonName().length() + 1);
//    file_obj.write(pr.getPersonPassword().c_str(), pr.getPersonPassword().length()+1);
//    file_obj.close();
//    
//}
//
//Person ReadFromFile()
//{
//    Person pr;
//    fstream file_obj;
//    file_obj.open("test.txt", ios::in);
//    file_obj.read((char*)&pr, sizeof(pr));
//    return pr;
//}

int login()
{
    string  password, name, fileName, usern, pw, AccountLevel;
    ofstream fileo;
    ifstream filei;
    cout << "\nEnter your username:";
    cin >> username;
    cout << "\nEnter your password:";
    cin >> password;
    fileName = username + ".txt";
    filei.open(fileName.c_str());
    if (!filei.is_open() && filei.fail())
    {
        cout << "\nYou are not registered, please contact an admin to register you before logging in.\n";
        filei.close();

    }
    
    
    getline(filei, AccountLevel);
    getline(filei, usern);
    getline(filei, pw);
    if (username == usern && password == pw)
    {
        cout << "\nYou are successfully logged in:)\n";

        getline(filei, AccountLevel);
        filei.close();
        return stoi(AccountLevel);
    }
    else {
        cout << "\nWrong username or password!\nPlease try Again.\n";
        return -1;
    }
    cout << endl;
    
}