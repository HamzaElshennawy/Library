#pragma once
#include "Person.h"
class Book
{
private:
	
	string AuthorName;//author name
	string Bname;//Book Name
	int AvailableQuantity=0;
	int IssuedQuantity=0;
protected:
	static int BooksID;
public:
	Book();
	~Book();
	void setAuthorName(string Aname /*Author name*/ );
	void setAvailableQuantity(int Aquantity);
	void setIssuedQuantity(int Iquantity);
	void setBookData();
	int getAvailableQuantity();
	int getIssuedQuantity();
	void getBookData();
	string getAuthorName();
};

