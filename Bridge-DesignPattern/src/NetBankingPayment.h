/*
 * NetBankingPayment.h
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#ifndef NETBANKINGPAYMENT_H_
#define NETBANKINGPAYMENT_H_

#include "Payment.h"
#include"IPaymentSystem.h"

class NetBankingPayment: public Payment {
public:
	void MakePayment(IPaymentSystem *IpaymentPtr);
};

#endif /* NETBANKINGPAYMENT_H_ */
