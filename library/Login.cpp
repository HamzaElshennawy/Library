#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string usn;
int tm;
void valid(string str)
{
    string dir,user;
    ifstream file;
    dir = str+".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        //file.close();
        return;
    }
    else
    {
        tm++;
        if(tm==3)
        {
            cout<<"\nThis username already exists\nPlease try Again.";
            //file.close();
            return;
        }
        cout<<"\nThis username already exists!\nCreate a username:";
        cin>>usn;
        //file.close();
        valid(usn);
    }
}

int login()
{
    int choice, i, exit = 0;
    string ans, psd, name, fname, bio, usern, pw, line, nusn;
    ofstream fileo;
    ifstream filei;
    cout << "Enter your username:";
    cin >> usn;
    cout << "\nEnter your password:";
    cin >> psd;
    fname = usn + ".txt";
    filei.open(fname.c_str());
    if (!filei.is_open() && filei.fail())
    {
        cout << "\nYou are not registered, please contact an admin to register you before logging in.\n";
        filei.close();

    }
    getline(filei, usern);
    getline(filei, line);
    getline(filei, pw);
    if (usn == usern && psd == pw)
    {
        cout << "\nYou are successfully logged in:)\n";
        
        getline(filei, line);
        cout << "Bio:" << line << endl;
        filei.close();
    }
    else {
        cout << "\nWrong username or password!\nPlease try Again.\n";
    }
    cout << endl;
}