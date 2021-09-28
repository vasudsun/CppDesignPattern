/*
 * IEmployee.h
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#ifndef IEMPLOYEE_H_
#define IEMPLOYEE_H_

#include<iostream>
using namespace std;

class IEmployee {
public:
	IEmployee();
	IEmployee(const IEmployee& reference);
	virtual void GetDetails();
};

#endif /* IEMPLOYEE_H_ */
