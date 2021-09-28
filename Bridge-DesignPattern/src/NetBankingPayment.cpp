/*
 * NetBankingPayment.cpp
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#include "NetBankingPayment.h"


void NetBankingPayment::MakePayment(IPaymentSystem *IpaymentPtr) {

	IpaymentPtr->ProcessPayment(string("NetBankingPayent"));
}
