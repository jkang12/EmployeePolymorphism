//Janitor.h

/*
Course Number:  CSE 1342
Programmer:     JOSEPH KANG
Date:           11/23/2015
Program Number: Program 5
Purpose:        DEMONSTRATE POLYMORPHISM WITH DIFFERENT TYPES OF EMPLOYEES READ FROM A BINARY FILE  
Server:		 genuse30.lyle.smu.edu
Instructor: DONALD EVANS
TA:             SEAN

Sources Consulted: SOME CODES ARE FROM THE TEXTBOOK OR THE PROFESSOR'S EXAMPLE
*/

//Doctor.h, Janitor.h, Nurse.h, and Administrator.h are all so similar, so the comments for each class will be found in Doctor.h

#ifndef JANITOR_H
#define JANITOR_H
#include <string>
#include "Employee.h"
using namespace std;

class Janitor : public Employee{
	
	private:
	
		string fullTime;
		
	public:
	
		Janitor(const string &, const string &, const string &, const string &, const string &);
		
		void setFullTime(const string &);
		
		
		string getFullTime() const;
		
		virtual void print() const override;
		
};

#endif
