/*
 * CitiPaymentSystem.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef CITIPAYMENTSYSTEM_H_
#define CITIPAYMENTSYSTEM_H_

#include "IPaymentSystem.h"

class CitiPaymentSystem: public IPaymentSystem {
public:
	void ProcessPayment(string arg);
};

#endif /* CITIPAYMENTSYSTEM_H_ */
