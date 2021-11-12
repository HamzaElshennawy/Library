#include <iostream>
#include "Librarian.h"


using namespace std;

int Librarian::LibrarianID = 0;
vector<Book> Librarian::AllBooks;
Librarian::Librarian(int level)
{
	LibrarianID++;
	setAccountType(level);
}
int Librarian::ReturnLibrarianID()
{
	return LibrarianID;
}
void Librarian::AddBook(Book bk)
{
	AllBooks.push_back(bk);

}

void Librarian::RemoveBook(Book bk)
{

}

void Librarian::IssueBook(Book bk)
{

}

void Librarian::ReturnBook(Book bk)
{

}

void Librarian::ViewAllBooks()
{
	for (auto& it:AllBooks )
	{
		it.getBookData();
	}
}

void Librarian::ViewBook()
{

}

void Librarian::ViewIssuedBooks()
{

}

void Librarian::SearchForBook()
{

}

