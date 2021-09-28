/*
 * Suzuki.h
 *
 *  Created on: 26-Jul-2021
 *      Author: in0suv
 */

#ifndef SUZUKI_H_
#define SUZUKI_H_

#include "Icar.h"

class Suzuki final: public Icar {

	 string Make();
			 double GetPrice();

	~Suzuki();
};




#endif /* SUZUKI_H_ */
