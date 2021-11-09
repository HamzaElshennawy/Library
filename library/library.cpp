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


string usern, name;
string username;
int login();



void WriteToFile(Person pr);


Person ReadFromFile();
bool logedin = false;

int main()
{
    
    int choice = 0;
    
    
    system("cls");
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\t\tWelcome to library system\n";
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\tPlease Login to be able to use this application.";
    int level = login();//same from person account type
    if (level == 3)
    {
        cout << "Welcome Mr. "+usern<<", "<<endl;
        cout << "Please choose what you want to do." << endl;
        cout << "1-Add Admin\n2-Remove admin\n3-Add student\n4-Remove student\n5-Add librarian\n6-Remove librarian" << endl;
    }
    
    switch (level)
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

int login()
{
    string  password, fileName,  pw, AccountLevel;
    ofstream fileo;
    ifstream filei;
    cout << "\nEnter your username: ";
    cin >> username;
    cout << "\nEnter your password: ";
    cin >> password;
    fileName = username + ".txt";
    filei.open(fileName.c_str());
    if (!filei.is_open() && filei.fail())
    {
        cout << "\nYou are not registered, please contact an admin to register and try again.\n";
        filei.close();

    }
    
    
    getline(filei, AccountLevel);
    getline(filei, usern);
    getline(filei, pw);
    if (username == usern && password == pw)
    {
        cout << "Great!!!!"<<endl;
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