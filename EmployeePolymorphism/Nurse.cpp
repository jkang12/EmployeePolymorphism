//Nurse.cpp

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

//Doctor.cpp, Janitor.cpp, Nurse.cpp, Administrator.cpp are all so similar, so the comments for each .cpp file can be found in Doctor.cpp

#include "Nurse.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Nurse::Nurse(const string &jt,const string &ssnumb,const string &fn,const string &ln,const string &np) : Employee(jt, fn, ln, ssnumb){
	setNPractitioner(np);
}
		


void Nurse::setNPractitioner(const string &np){
	nPractitioner = np;
}



string Nurse::getNPractitioner() const{
	return nPractitioner;
}
		
void Nurse::print() const{
	Employee::print();
	cout << "          " << "Nurse practitioner?: " << getNPractitioner();
}
		
		
		
