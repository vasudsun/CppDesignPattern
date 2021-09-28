/*
 * CarDecorator.h
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#ifndef CARDECORATOR_H_
#define CARDECORATOR_H_

#include "Icar.h"

class CarDecorator: public Icar {


public:
	Icar* car_base_obj;

public:
	CarDecorator(Icar* car);
	string make();

	double GetPrice();

	virtual double DiscountedPrice(){};

	~CarDecorator();
};

#endif /* CARDECORATOR_H_ */
