#pragma once
#include "Book.h"
#include "Person.h"
#include <vector>

class Librarian:public Person
{
private:
	static int LibrarianID;
	static vector<Book> AllBooks;
	static vector<Book>IssuedBooks;
protected:

public:
	Librarian(int level);
	Librarian();
	void AddBook();
	bool RemoveBook(string name);
	void IssueBook(string name,int Quantity);
	void ReturnBook(string name);
	void ViewAllBooks();
	bool ViewBook(string name);
	bool ViewBook(int ID);
	void ViewIssuedBooks();
	void SearchForBook();
	int ReturnLibrarianID();
};

