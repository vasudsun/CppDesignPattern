/*
 * OfferPrice.h
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#ifndef OFFERPRICE_H_
#define OFFERPRICE_H_

#include "CarDecorator.h"


class OfferPrice: public CarDecorator {
public:
	OfferPrice(Icar* decorator_ptr);
	double DiscountedPrice();

};

#endif /* OFFERPRICE_H_ */
