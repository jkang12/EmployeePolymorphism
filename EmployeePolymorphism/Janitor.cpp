//Janitor.cpp

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

#include "Janitor.h"
#include <iostream>
#include <stdexcept>
#include "Employee.h"
#include <string>
using namespace std;

Janitor::Janitor(const string &jt,const string &ssnumb,const string &fn,const string &ln,const string &ft) : Employee(jt, fn, ln, ssnumb){
	setFullTime(ft);
}



void Janitor::setFullTime(const string &ft){
	fullTime = ft;
}
		


string Janitor::getFullTime() const{
	return fullTime;
}

void Janitor::print() const{
	Employee::print();
	cout << "          " << "Work full time?: " << getFullTime();
}		
		
		
		
		
		
		
		
		
		
