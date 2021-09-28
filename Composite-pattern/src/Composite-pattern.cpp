//============================================================================
// Name        : Composite-pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Employee.h"
#include"Manager.h"
using namespace std;


int main() {

	IEmployee *John= new Employee(string("John"),string("IT"));
	IEmployee *Mike= new Employee(string("Mike"),string("IT"));
	IEmployee *Jason= new Employee(string("Jason"),string("HR"));
	IEmployee *Eric= new Employee(string("Eric"),string("HR"));
	IEmployee *Henry= new Employee(string("Henry"),string("HR"));


	vector<IEmployee*>employeeList;
	employeeList.push_back(John);
	employeeList.push_back(Mike);


	IEmployee *James= new Manager(string("James"),string("IT"),employeeList);

	cout<<"added first Manager"<<endl;
	cout<<"                 "<<endl;


	vector<IEmployee*>employeeList1;
	employeeList1.push_back(Jason);
	employeeList1.push_back(Eric);
	employeeList1.push_back(Henry);

	IEmployee *Philip= new Manager(string("Philip"),string("HR"),employeeList1);

	cout<<"added second Manager"<<endl;


	vector<IEmployee*>employeeList2;
	//employeeList2.push_back(James);
	employeeList2.push_back(Philip);
	IEmployee *Bob= new Manager(string("Bob"),string("Head"),employeeList2);
	cout<<"added Line  Manager"<<endl;
	Bob->GetDetails();

	getchar();

	return 0;
}
