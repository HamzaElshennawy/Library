#pragma once
#include "Book.h"
#include "Person.h"
#include <vector>

class Librarian:Person
{
private:
	static int LibrarianID;
	static vector<Book> AllBooks;
protected:

public:
	Librarian();
	void AddBook(Book bk);
	void RemoveBook(Book bk);
	void IssueBook(Book bk);
	void ReturnBook(Book bk);
	void ViewAllBooks();
	void ViewBook();
	void ViewIssuedBooks();
	void SearchForBook();
	int ReturnLibrarianID();
};

