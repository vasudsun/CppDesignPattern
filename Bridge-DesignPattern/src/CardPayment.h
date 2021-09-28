/*
 * CardPayment.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef CARDPAYMENT_H_
#define CARDPAYMENT_H_

#include "Payment.h"
#include"IPaymentSystem.h"

class CardPayment: public Payment {
public:
	void MakePayment(IPaymentSystem *IpaymentPtr);
};

#endif /* CARDPAYMENT_H_ */
