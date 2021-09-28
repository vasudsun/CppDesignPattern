/*
 * Manager.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: in0suv
 */

#include "Manager.h"
#include"Employee.h"
Manager::Manager() {
}

Manager::Manager(const string &name, const string &Department,vector<IEmployee*>&listobj) {


iName=name;
iDepartment=Department;
employee =new Employee(iName,iDepartment);
SubOrdinates=listobj;

//SubOrdinates.push_back(employee);




}

void Manager::GetDetails() {

cout<<"Printing Manager Details"<<endl;
cout<<"###########################"<<endl;
cout<<"Manager Name:"<<iName<<"    Department:"<<iDepartment<<endl;


for (auto &emp : SubOrdinates) // access by reference to avoid copying
{
	emp->GetDetails();
}


}
