#pragma once
#include "Book.h"
#include "Person.h"

class Librarian:Person
{
private:
	
protected:

public:
	void AddBook(Book bk);
	void RemoveBook(Book bk);
	void IssueBook(Book bk);
	void ReturnBook(Book bk);
	void ViewBook();
	void ViewIssuedBooks();
	void SearchForBook();
};

