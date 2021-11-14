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



void WriteToFile(Person pr);
void ReadAllData();

vector<Person> Admins;
vector<Person> Students;
vector<Person> Librarians;
//Person ReadFromFile();
bool logedin = false;


Admin AD;



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
    
    int level = login();//same from person account type
    if (level)
    {
        cout << "Welcome Mr. " + usern << ", " << endl;
        cout << "Please choose what you want to do." << endl;
    }
    
    switch (level)
    {
    case 1:
        cout << "1-Add Admin\n2-Remove admin\n3-Add student\n4-Remove student\n5-Add librarian\n6-Remove librarian" << endl;
        cin >> choice;
        if (choice == 1)
        {

        }
        if (choice == 2)
        {

        }
        if (choice == 3)
        {

        }
        if (choice == 4)
        {

        }
        if (choice == 5)
        {

        }
        if (choice == 6)
        {

        }
        break;
    case 2:
        cout<<"1-Add Book\n2-Remove Book\n3-Issue books\n4-Return Book\n5-View Books\n6-Search For Book (id/name)" << endl;
        cin >> choice;
        if (choice == 1)
        {

            
        }
        if (choice == 2)
        {

        }
        if (choice == 3)
        {

        }
        if (choice == 4)
        {

        }
        if (choice == 5)
        {

        }
        if (choice == 6)
        {

        }
        break;
    default:
        cout << "Something went wrong with error code 1001";//first error code
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
void ReadAllData()
{
    int LineCounter = 9;
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
    //while (!filei.eof())
    //{
    //    /*getline(filei, statement);
    //    cout << statement << endl;*/
    //    cout << filei.peek()<<endl;
    //    LineCounter++;
    //    //cout << LineCounter << endl;
    //}
    //cout << "while ended";
    string Iname;
    string Ipass;
    for (int i = 0; i < LineCounter; i+=3)
    {
        getline(filei, AccountLevel);
        if (stoi(AccountLevel) == 1)
        {
            Person* temp = new Admin(1);
            cout << AccountLevel << endl;
            getline(filei, Iname);
            temp->setPersonName(Iname);
            cout << Iname << endl;
            getline(filei, Ipass);
            temp->setPersonPassword(Ipass);
            cout << Ipass << endl;
            cout << "Pushed in 1" << endl;
            Admins.push_back(*temp);
        }
        if (stoi(AccountLevel) == 2)
        {
            cout << AccountLevel << endl;
            Person* temp = new Librarian(2);
            getline(filei, Iname);
            temp->setPersonName(Iname);
            cout << Iname << endl;
            getline(filei, Ipass);
            cout << Ipass << endl;
            temp->setPersonPassword(Ipass);
            cout << "Pushed in 2" << endl;
            Librarians.push_back(*temp);
        }
        if (stoi(AccountLevel) == 3)
        {
            cout << AccountLevel << endl;
            Person* temp = new Student(3);
            getline(filei, Iname);
            temp->setPersonName(Iname);
            cout << Iname << endl;
            getline(filei, Ipass);
            cout << Ipass << endl;
            temp->setPersonPassword(Ipass);
            cout << "Pushed in 3" << endl;
            Students.push_back(*temp);
        }
    }
    
}