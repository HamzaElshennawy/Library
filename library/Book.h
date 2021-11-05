#pragma once
#include "Person.h"
class Book
{
private:
	
	string AuthorName;//author name
	int AvailableQuantity;
	int IssuedQuantity;
protected:
	static int BooksID;
public:
	Book();
	~Book();
	void setAuthorName();
	void setAvailableQuantity();
	void setIssuedQuantity();
	void getAvailableQuantity();
	void getIssuedQuantity();
};

