//Employee.h

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

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
	
	public:
		//constructor
	
		Employee ( const string &, const string &, const string &, const string &);
		
		//appropriate get and set functions for the attributes
		
		void setJobTitle( const string & );
		string getJobTitle() const;
		
		void setFirstName( const string &);
		string getFirstName() const;
		
		void setLastName( const string &);
		string getLastName() const;
		
		void setSSN(const string & );
		string getSSN() const;
		
		//virtual function print()
		virtual void print() const;
	private:
		string jtitle;//job title
		string firstName;//first name
		string lastName;//last name
		string ssn;//social security name
		
	};
	#endif
