#include <iostream>
#include "Book.h"


using namespace std;


int Book::BooksID = 0;
Book::Book(string name,string Aname,int AQuantity)
{
	Bname = name;
	AuthorName = Aname;
	AvailableQuantity = AQuantity;
	BooksID++;
	
}

Book::~Book()
{


}

void Book::setAuthorName(string Aname)
{
	AuthorName = Aname;
}

void Book::setAvailableQuantity(int Anumber)
{
	AvailableQuantity = Anumber;

}

void Book::setIssuedQuantity(int Iquantity)
{
	IssuedQuantity = Iquantity;

}

void Book::setBookData()
{
	cout << "Please Enter Book Name"<<endl;
	cin >> Bname;
	cout << "Plase Enter Author Name" << endl;
	cin>>AuthorName;
	cout << "Please Enter Available Quantity" << endl;
	cin >> AvailableQuantity;
}

int Book::getAvailableQuantity()
{
	return AvailableQuantity;
}

int Book::getIssuedQuantity()
{
	return IssuedQuantity;
}

void Book::getBookData()
{
	cout << "\nBook Name: " << Bname<<endl;
	cout << "Author Name: " << AuthorName << endl;
	cout << "Available Quantity: " << AvailableQuantity << endl;
	cout << "Issued Quantity: " << IssuedQuantity << endl;
}

string Book::getAuthorName()
{
	return AuthorName;
}

string Book::getBookName()
{
	return Bname;
}

void Book::ReturnBook()
{
	AvailableQuantity++;
	IssuedQuantity--;
}

int Book::getBookID()
{
	return BooksID;
}
