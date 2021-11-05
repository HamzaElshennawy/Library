#pragma once
#include "Book.h"
#include "Student.h"
class IssuedBooks:Book
{
private:
	static int ProcedureID;
	int IssuedBookID;
	int StudentID;
	bool Returned = false;

protected:


public:
	void setIssuedBookID(int BID);
	void setStudentID(int SID);
	bool isReturned();
};

