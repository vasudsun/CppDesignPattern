//============================================================================
// Name        : Decorator-pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Icar.h"
#include"Suzuki.h"
#include"Hyundai.h"
#include"CarDecorator.h"
#include"OfferPrice.h"
using namespace std;

int main() {

	Icar* car=new Suzuki();
CarDecorator*decorator=new OfferPrice(car);

cout<<"Original Price is"<<car->GetPrice()<<endl;

cout<<"Offer price is "<<decorator->DiscountedPrice()<<endl;

getchar();

	return 0;
}
