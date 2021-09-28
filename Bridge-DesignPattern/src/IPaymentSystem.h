/*
 * IPaymentSystem.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef IPAYMENTSYSTEM_H_
#define IPAYMENTSYSTEM_H_


#include<iostream>
#include<string>
using namespace std;

class IPaymentSystem {
public:
	virtual void ProcessPayment(string arg);
	virtual ~IPaymentSystem();

};

#endif /* IPAYMENTSYSTEM_H_ */
