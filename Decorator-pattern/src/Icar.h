/*
 * Icar.h
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#ifndef ICAR_H_
#define ICAR_H_
#include<iostream>

using namespace std;

#include<string>

class Icar {

public:
	virtual string Make(){};
	virtual double GetPrice(){};
	 virtual ~Icar(){};

};

#endif /* ICAR_H_ */
