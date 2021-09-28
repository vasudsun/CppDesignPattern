/*
 * IDBIPaymentSystem.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef IDBIPAYMENTSYSTEM_H_
#define IDBIPAYMENTSYSTEM_H_

#include "IPaymentSystem.h"

class IDBIPaymentSystem: public IPaymentSystem {
public:
	void ProcessPayment(string arg);
};

#endif /* IDBIPAYMENTSYSTEM_H_ */
