#include "Book.h"
int Book::BooksID = 0;
Book::Book()
{
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

int Book::getAvailableQuantity()
{
	return AvailableQuantity;
}

int Book::getIssuedQuantity()
{
	return IssuedQuantity;
}

string Book::getAuthorName()
{
	return AuthorName;
}
