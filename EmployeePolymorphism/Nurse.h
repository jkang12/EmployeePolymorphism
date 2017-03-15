//Nurse.h

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

#ifndef NURSE_H
#define NURSE_H
#include "Employee.h"
#include <string>
using namespace std;

class Nurse : public Employee{
	
	private:
	
		
		string nPractitioner;
		
	public:
	
		Nurse(const string &,const string &,const string&,const string&,const string&);
		
	
		void setNPractitioner(const string&);
		
		
		string getNPractitioner() const;
		
		virtual void print() const override;
		
		
};

#endif

