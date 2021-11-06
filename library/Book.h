#pragma once
#include "Person.h"
class Book
{
private:
	
	string AuthorName;//author name
	int AvailableQuantity=0;
	int IssuedQuantity=0;
protected:
	static int BooksID;
public:
	Book();
	~Book();
	void setAuthorName(string Aname);
	void setAvailableQuantity(int Aquantity);
	void setIssuedQuantity(int Iquantity);
	int getAvailableQuantity();
	int getIssuedQuantity();
	string getAuthorName();
};

