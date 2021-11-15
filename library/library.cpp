/*
                                    .....This project still under development.....


This project had been developed by Hamza Mohammed Elshennawy using C++ and uploaded to Github.
If anyone wants to clone this project and edit on it or use it for anytype of uses he/she has the full authorty to do it.
There are no credits on this project. This project is made for educational purposes.

Personal E-mail: elshennawyhamza@gmail.com
University E-mail: h.elshennawy@nu.edu.eg
whatsapp number: +201154244911
Github link: https://github.com/HamzaElshennawy/Library
Please if there anytype of need to contact me don't hesitate to send me an E-mail or a messege on whatsapp.


*/
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
#include <conio.h>
#include <windows.h>
using namespace std;


string usern, name;
string username;
int login();


void showVectors();
void WriteToFile(Person pr);
void ReadAllData();

vector<Person> Admins;
vector<Person> Students;
vector<Person> Librarians;
//Person ReadFromFile();
bool logedin = false;


Admin AD;
Librarian LN;



int main()
{
    int choice = 0;
    Admins=AD.ReturnAdmins();
    Students = AD.ReturnStudents();
    Librarians = AD.ReturnLibrarians();
    system("cls");
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\t\tWelcome to library system\n";
    cout << "************************************************************************************************************************\n";
    cout << "\t\t\t\tPlease Login to be able to use this application.";
    cout << "\nReading Data....";
    Sleep(3000);
    cout<<"Please wait....";
    Sleep(2000);
    ReadAllData();
    //showVectors();
    int level = login();//same from person account type
    if (level)
    {
        cout << "Welcome Mr. " + usern << ", " << endl;
        cout << "Please choose what you want to do." << endl;
    }
    while (true)
    {
        switch (level)
        {
        case 1:
            cout << "1-Add Admin\n2-Remove admin\n3-Add student\n4-Remove student\n5-Add librarian\n6-Remove librarian\n7-Exit" << endl;
            cin >> choice;
            if (choice == 1)
            {
                string name;
                string password;
                cout << "Please enter Admin Name: ";
                cin >> name;
                cout << "Please enter Admin Password: ";
                cin >> password;
                AD.AddAdmin(name, password);
            }
            if (choice == 2)
            {
                string name;
                cout << "Please enter Admin name";
                if (AD.RemoveAdmin(name))
                {
                    cout << "\nRemoved";
                }
                else
                {
                    cout << "\nThis name is not found.";
                }
            }
            if (choice == 3)
            {
                string name;
                string password;
                string email;
                string BD;//BD is Birthday
                cout << "Please enter Student Name: ";
                cin >> name;
                cout << "Please enter Student Password: ";
                cin >> password;
                cout << "Please enter Student Email";
                cin >> email;
                cout << "Please enter Student Birthday";
                cin >> BD;
                AD.AddStudent(name, password, email, BD);
            }
            if (choice == 4)
            {
                string name;
                cout << "Please enter Student Name";
                cin >> name;
                if (AD.RemoveStudent(name))
                {
                    cout << "\nRemoved";
                }
                else
                {
                    cout << "\nThis name is not found.";
                }
            }
            if (choice == 5)
            {
                string name;
                string password;
                cout << "Please enter Librarian Name: ";
                cin >> name;
                cout << "Please enter Librarian Password: ";
                cin >> password;
                AD.AddLibrarian(name, password);
            }
            if (choice == 6)
            {
                string name;
                cout << "Please enter Student Name";
                cin >> name;
                if (AD.RemoveLibrarian(name))
                {
                    cout << "\nRemoved";
                }
                else
                {
                    cout << "This name is not found";
                }
            }
            if (choice == 7)
            {
                exit(0);
            }
            break;
        case 2:
            cout << "1-Add Book\n2-Remove Book\n3-Issue books\n4-Return Book\n5-View Books\n6-Search For Book (id/name)" << endl;
            cin >> choice;
            if (choice == 1)
            {
                LN.AddBook();
            }
            if (choice == 2)
            {
                cout << "Please enter book name";
                string name;
                cin >> name;
                LN.RemoveBook(name);
            }
            if (choice == 3)
            {
                cout << "Please enter book name";
                string name;
                int Quan = 0;
                cin >> name;
                cout << "Please enter Quantity";
                cin >> Quan;
                LN.IssueBook(name, Quan);
            }
            if (choice == 4)
            {
                cout << "Please enter book name";
                string name;
                cin >> name;
                LN.ReturnBook(name);
            }
            if (choice == 5)
            {
                LN.ViewAllBooks();
            }
            if (choice == 6)
            {
                LN.SearchForBook();
            }
            break;
        default:
            cout << "Something went wrong with error code 1001";//first error code
            break;
        }
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
void ReadAllData()
{
    int LineCounter = 12;
    string fileName, AccountLevel;
    ofstream fileo;
    ifstream filei;
    fileName = "Data.txt";
    
    filei.open(fileName);
    if (!filei.is_open() && filei.fail())
    {
        cout << "\nError Loading The Data. Please Restart The Application.\n";
        filei.close();
    }
    string statement;
    cout << endl;
    string Iname;
    string Ipass;
    for (int i = 0; i < LineCounter; i+=3)
    {
        getline(filei, AccountLevel);
        if (stoi(AccountLevel) == 1)
        {
            Person* temp = new Admin(1);            
            getline(filei, Iname);
            temp->setPersonName(Iname);            
            getline(filei, Ipass);
            temp->setPersonPassword(Ipass);            
            Admins.push_back(*temp);
        }
        if (stoi(AccountLevel) == 2)
        {            
            Person* temp = new Librarian(2);
            getline(filei, Iname);
            temp->setPersonName(Iname);            
            getline(filei, Ipass);            
            temp->setPersonPassword(Ipass);
            Librarians.push_back(*temp);
        }
        if (stoi(AccountLevel) == 3)
        {            
            Person* temp = new Student(3);
            getline(filei, Iname);
            temp->setPersonName(Iname);
            getline(filei, Ipass);
            temp->setPersonPassword(Ipass);
            Students.push_back(*temp);
        }
    }
}
void showVectors()
{
    for (auto it : Admins)
    {
        for (int i = 0; i < 4; i++)
        {
            cout<<it.getPersonData(i);
            cout << endl;
        }
        cout << "------------------" << endl;
    }
    for (auto it : Students)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << it.getPersonData(i);
            cout << endl;
        }
        cout << "------------------" << endl;
    }
    
}