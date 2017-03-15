//Administrator.cpp

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

#include "Administrator.h"
#include "Employee.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Administrator::Administrator(const string &jt, const string &ssnumb, const string &fn, const string &ln, const string &emps) : Employee(jt, fn, ln, ssnumb){
	
	setEmpSuper(emps);
}
		

void Administrator::setEmpSuper(const string &ems){
	empSuper = ems;
}
		


string Administrator::getEmpSuper() const{
	return empSuper;
}

void Administrator::print() const{
	Employee::print();
	cout << "          " << "Number of employees supervised: " << getEmpSuper();
}
		





