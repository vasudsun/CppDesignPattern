/*
 * Employee.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#include "Employee.h"

Employee::Employee(const string &nameObj, const string &deptObject) {

	Name=nameObj;
	Department=deptObject;
}

void Employee::GetDetails()
{

	cout<<"Name is "<<Name<<"    Department is "<<Department<<endl;



}

Employee::Employee(const Employee &empref) {

	cout<<"employee copy constructor"<<endl;
}

Employee::Employee() {

	cout<<"Employee constructor got called"<<endl;
}
