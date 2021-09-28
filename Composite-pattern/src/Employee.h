/*
 * Employee.h
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "IEmployee.h"
#include<string>
class Employee: public IEmployee {

public:
Employee();
Employee(const Employee& empref);

	string Name;
	string Department;

	Employee(const string &nameObj, const string &deptObject);


	const string& getDepartment() const {
		return Department;
	}

	void setDepartment(const string &department) {
		Department = department;
	}

	const string& getName() const {
		return Name;
	}

	void setName(const string &name) {
		Name = name;
	}
	void GetDetails();
};

#endif /* EMPLOYEE_H_ */
