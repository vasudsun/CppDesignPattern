/*
 * Tax.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_TAX_H_
#define SUBSYSTEM_TAX_H_

#include <ITax.h>
#include<string>
#include<iostream>
using namespace std;

class Tax: public ITax {

public:
	void ApplyTax(int cartID, double taxPercent);
	 double GetTaxByState(string state);
};

#endif /* SUBSYSTEM_TAX_H_ */
