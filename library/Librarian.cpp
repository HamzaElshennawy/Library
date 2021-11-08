#include "Librarian.h"

int Librarian::LibrarianID = 0;

Librarian::Librarian()
{
	LibrarianID++;
}
int Librarian::ReturnLibrarianID()
{
	return LibrarianID;
}
//void Librarian::AddBook(Book bk)
//{
//
//
//}
//
//void Librarian::RemoveBook(Book bk)
//{
//
//}
//
//void Librarian::IssueBook(Book bk)
//{
//
//}
//
//void Librarian::ReturnBook(Book bk)
//{
//
//}
//
//void Librarian::ViewBook()
//{
//
//}
//
//void Librarian::ViewIssuedBooks()
//{
//
//}
//
//void Librarian::SearchForBook()
//{
//
//}
//
