//Doctor.cpp

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

#include <iostream>
#include "Doctor.h"
#include "Employee.h"
#include <string>
#include <iomanip>
using namespace std;

//class Doctor inherits from class Employee
Doctor::Doctor(const string &jt, const string &ss_number, const string &fName, const string &lName, const string &special, const string &board) : Employee( jt, fName, lName, ss_number){ //send job title, first name, last name, social security number to appropriate functions found in Employee.h and Employee.cpp
	//class specific functions
	setSpecialty(special);
	setBCertified(board);
}
	
	



//class specific functions

void Doctor::setBCertified(const string &board){
	bCertified = board;
}

void Doctor::setSpecialty(const string &special){
	specialty = special;
}
		

string Doctor::getSpecialty() const{
	return specialty;
}
string Doctor::getBCertified() const{
	return bCertified;
}

//polymorphism demonstrated with print() from Employee.h
void Doctor::print() const{
	Employee::print();
	cout << left << getSpecialty() << "Board Certified?: " << getBCertified() << setw(20);
}











