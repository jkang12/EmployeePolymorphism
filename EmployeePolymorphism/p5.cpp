//p5.cpp

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

#include "Doctor.h"
#include "Janitor.h"
#include "Nurse.h"
#include "Administrator.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <vector>
using namespace std;

void printingMachine( const Employee * const );

int main(){
	//read the binary file
	ifstream inFile( "HospitalEmployees.txt", ios::in );
	
	//check to see if such a file exists or is readable
	if ( !inFile ){
		cerr << "File could not be opened" << endl;
		exit( EXIT_FAILURE );
	}
	
	//initiate a vector of type Employee class
	vector < Employee *> employees;
	string jtitle, ssn, first, last, penultimateString, ultimateString;

	while(!inFile.eof()){ //read until end of file
		inFile >> jtitle >> ssn >> first >> last >> penultimateString; //only read these fields for all classes
            if (jtitle == "Doctor" || jtitle == "doctor"){ 
				inFile >> ultimateString;  //read one more field for doctors
				Employee *p = new Doctor (jtitle, ssn, first,last,penultimateString, ultimateString);
				employees.push_back(p); // add this pointer to the vector
			}      
			else if (jtitle == "Janitor" || jtitle == "janitor"){
				Employee *p = new Janitor (jtitle, ssn, first, last, penultimateString);
				employees.push_back(p);
			}
			else if (jtitle == "Nurse" || jtitle == "nurse"){
				Employee *p = new Nurse (jtitle, ssn, first, last, penultimateString);
				employees.push_back(p);
			}
			else if (jtitle == "Administrator" || jtitle == "administrator"){
				Employee *p = new Administrator (jtitle, ssn, first, last, penultimateString);
				employees.push_back(p);
			}
    }     
    
    //print everything in a nice format        
    cout << endl;
    cout << left << setw(20) << "Job Title" << setw(20) << "First Name" << setw(20) << "Last Name" << setw(20) << "Social Security #" << setw(20) << "Doctor Specialty" << setw(20) << "Job Specific Characteristics" << endl;
    cout << "__________________________________________________________________________________________________________________________________" << endl << endl;
    
    //get the size of employees vector
    size_t end = employees.size();
    //if we compare the size to the amount of loops for the for loops, it has one extra loop. So decrement the size by one.
    end--;
    
    //go through the vector and use the print function for each pointer
    for (size_t i = 0; i < end;++i){
		printingMachine(employees[i]); //send the pointer to the printingMachine method
		cout << endl;                 
    }
   return 0;
}

void printingMachine( const Employee * const baseClassPointer ){ //print by pointer
	baseClassPointer->print();
}

