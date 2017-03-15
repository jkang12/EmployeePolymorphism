//Employee.cpp

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

#include <iostream>
#include "Employee.h"
#include <string>
#include <iomanip>
using namespace std;

//constructor
Employee::Employee( const string &jt, const string &fn, const string &ln, const string &ssNumb ) : jtitle( jt ), firstName( fn ), lastName( ln ), ssn(ssNumb){
}

//get and set functions
void Employee::setJobTitle( const string &jt ){
	jtitle = jt;
}

string Employee::getJobTitle() const{
	return jtitle;
}

void Employee::setFirstName( const string &fn){
	firstName = fn;
}

string Employee::getFirstName() const{
	return firstName;
}

void Employee::setLastName( const string &ln ){
	lastName = ln;
}

string Employee::getLastName() const{
	return lastName;
}

void Employee::setSSN( const string &ssNumb ){
	ssn = ssNumb;
}

string Employee::getSSN() const{
	return ssn;
}

//virtual print() function
void Employee::print() const{
	cout << left << setw(20) << getJobTitle() << setw(20) << getFirstName() << setw(20) << getLastName() << setw(20) << getSSN() << setw(20);
}
