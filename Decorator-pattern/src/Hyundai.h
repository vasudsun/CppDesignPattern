/*
 * Hyundai.h
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#ifndef HYUNDAI_H_
#define HYUNDAI_H_

#include "Icar.h"

class Hyundai final : public Icar
{

	 string Make();
		 double GetPrice();
~Hyundai();

};

#endif /* HYUNDAI_H_ */
