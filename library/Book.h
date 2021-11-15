#pragma once
#include "Person.h"
class Book
{
private:
	
	string AuthorName;//author name
	string Bname;//Book Name
	int AvailableQuantity;
	int IssuedQuantity=0;
protected:
	static int BooksID;
public:
	Book(string name, string Aname, int AQuantity);
	~Book();
	void setAuthorName(string Aname /*Author name*/ );
	void setAvailableQuantity(int Aquantity);
	void setIssuedQuantity(int Iquantity);
	void setBookData();
	int getAvailableQuantity();
	int getIssuedQuantity();
	void getBookData();
	string getBookName();
	string getAuthorName();
	int getBookID();
	void ReturnBook();
};

