/*
 * IEmployee.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#include "IEmployee.h"

void IEmployee::GetDetails() {

	cout<<"base class"<<endl;
}

IEmployee::IEmployee(const IEmployee &reference) {

	cout<<"base class copy constructor"<<endl;
}

IEmployee::IEmployee() {

	cout<<"IEmployee Constructor"<<endl;
}
