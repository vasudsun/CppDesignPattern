//============================================================================
// Name        : Bridge-DesignPattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"IPaymentSystem.h"
#include"Payment.h"
#include"CardPayment.h"
#include"NetBankingPayment.h"
#include"IDBIPaymentSystem.h"
#include"CitiPaymentSystem.h"
#include<string>



using namespace std;

int main() {

	IPaymentSystem *systemObj=new IDBIPaymentSystem();//Selecting IDBI gateway

	Payment* paymentPTR=new CardPayment();
	paymentPTR->MakePayment(systemObj);

	getchar();


	return 0;
}
