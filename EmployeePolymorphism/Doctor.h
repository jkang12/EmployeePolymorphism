//Doctor.h

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

#ifndef DOCTOR_H
#define DOCTOR_H
#include "Employee.h"
#include <string>
using namespace std;


//class Doctor inherits from class Employee
class Doctor : public Employee{ //start polymorphism
	
	private:
		
		//class-specific attributes
		string specialty;
		string bCertified;
		
	public:
	
		//constructor
		Doctor(const string &, const string &, const string &, const string &, const string &, const string &);
		
		//these functions are class-specific for the class-specific attributes
		void setSpecialty(const string &);
		void setBCertified(const string &);
		
		
		string getSpecialty() const;
		string getBCertified() const;
		
		virtual void print() const override; //override the virtual print function from Employee.h
};

#endif
		
