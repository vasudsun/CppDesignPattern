/*
 * Manager.h
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "IEmployee.h"
#include<string>
#include<vector>

class Manager: public IEmployee {


public:
	string iName;

	string iDepartment;
	vector<IEmployee*>SubOrdinates;
	IEmployee *employee;

	Manager();

	Manager( const string &name, const string &Department,vector<IEmployee*>&listobj);


	const string& getDepartment() const {
		return iDepartment;
	}

	void setDepartment(const string &department) {
		iDepartment = department;
	}

	const string& getName() const {
		return iName;
	}

	void setName(const string &name) {
		iName = name;
	}

	void GetDetails();
};

#endif /* MANAGER_H_ */
