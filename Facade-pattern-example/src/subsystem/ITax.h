/*
 * ITax.h
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_ITAX_H_
#define SUBSYSTEM_ITAX_H_
#include<iostream>
#include<string>
using namespace std;
class ITax {

public:
	virtual double GetTaxByState(string state);
	        virtual void ApplyTax(int cartID, double taxPercent);
};

#endif /* SUBSYSTEM_ITAX_H_ */
