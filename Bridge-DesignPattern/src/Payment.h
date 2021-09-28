/*
 * Payment.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef PAYMENT_H_
#define PAYMENT_H_

#include<iostream>
#include<string>
#include"IPaymentSystem.h"



class Payment {


public:

//IPaymentSystem *systemPtr;
	virtual void MakePayment(IPaymentSystem *IpaymentPtr);
};

#endif /* PAYMENT_H_ */
