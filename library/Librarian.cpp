#include <iostream>
#include "Librarian.h"


using namespace std;

int Librarian::LibrarianID = 0;
vector<Book> Librarian::AllBooks;
vector<Book> Librarian::IssuedBooks;
Librarian::Librarian(int level)
{
	LibrarianID++;
	setAccountType(level);
}
Librarian::Librarian()
{
	LibrarianID++;
}
int Librarian::ReturnLibrarianID()
{
	return LibrarianID;
}
void Librarian::AddBook()
{
	string BName, BAuthorName;
	int AQuantity;
	cout << "\nPlease enter Book Name: ";
	cin >> BName;
	cout << "\nPlease enter Author name: ";
	cin >> BAuthorName;
	cout << "Please enter Available quantity: ";
	cin >> AQuantity;
	Book temp(BName,BAuthorName,AQuantity);
	AllBooks.push_back(temp);
}

bool Librarian::RemoveBook(string name)
{
	int counter = 0;
	for (auto it : AllBooks)
	{
		if (it.getBookName() == name)
		{
			cout << "Removed";
			AllBooks.erase(AllBooks.begin() + counter);
			return true;
		}
		counter++;
	}
	return false;
}

void Librarian::IssueBook(string name,int Quantity)
{
	for (auto it : AllBooks)
	{
		if (it.getBookName() == name)
		{
			it.setIssuedQuantity(Quantity);
			it.getBookData();
		}
	}
	
}

void Librarian::ReturnBook(string name)
{
	for (auto it : AllBooks)
	{
		if (it.getBookName() == name)
		{
			it.ReturnBook();
		}
	}
}

void Librarian::ViewAllBooks()
{
	for (auto it:AllBooks )
	{
		it.getBookData();
	}
}

bool Librarian::ViewBook(string name)
{
	for (auto it : AllBooks)
	{
		if (it.getBookName() == name)
		{
			it.getBookData();
			return true;
		}
	}
	cout << "\nNot found with Name. Try with ID";
	return false;
}
bool Librarian::ViewBook(int ID)
{
	for (auto it : AllBooks)
	{
		if (it.getBookID() == ID)
		{
			it.getBookData();
			return true;
		}
	}
	cout << "\nNot Found with ID. Try with name.";
	return false;
}

void Librarian::ViewIssuedBooks()
{
	for (auto it : AllBooks)
	{
		if (it.getIssuedQuantity() > 0)
		{
			IssuedBooks.push_back(it);
			it.getBookData();
		}
	}
}

void Librarian::SearchForBook()
{
	cout << "Search for book with name or ID?  ";
	int ID=0;
	string name;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		ViewBook(name);
	}
	else
	{
		ViewBook(ID);
	}
}

