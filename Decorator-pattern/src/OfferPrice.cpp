/*
 * OfferPrice.cpp
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#include "OfferPrice.h"

OfferPrice::OfferPrice(Icar* decorator_ptr):CarDecorator(decorator_ptr)
{



}

double OfferPrice::DiscountedPrice()
{


	return (car_base_obj->GetPrice()-1000);
}
