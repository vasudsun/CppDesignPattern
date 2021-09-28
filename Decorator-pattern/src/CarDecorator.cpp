/*
 * CarDecorator.cpp
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#include "CarDecorator.h"

CarDecorator::CarDecorator(Icar* car)
{
	car_base_obj=car;


}


string CarDecorator::make()
{

	return car_base_obj->Make();

}

double CarDecorator::GetPrice()
{
	return car_base_obj->GetPrice();
}

CarDecorator::~CarDecorator()
{



}
