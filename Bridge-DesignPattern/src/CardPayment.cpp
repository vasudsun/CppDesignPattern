/*
 * CardPayment.cpp
 *
 *  Created on: 30-Aug-2021
 *      Author: in0suv
 */

#include "CardPayment.h"

void CardPayment::MakePayment(IPaymentSystem *IpaymentPtr) {

	IpaymentPtr->ProcessPayment(string("CardPayment"));
}
