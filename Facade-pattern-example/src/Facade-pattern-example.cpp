//============================================================================
// Name        : Facade-pattern-example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"IuserOrder.h"
#include "UserOrder.h"
#include"ICart.h"
#include"Product.h"
#include"AddressDetails.h"
#include"ShoppingCartDetails.h"
#include"Wallet.h"
#include"Order.h"
#include"Tax.h"
#include"string"

using namespace std;

int main() {


	IUserOrder *user_order = new UserOrder();
	cout<<"Facade : Start"<<endl;
	cout<<"************************************"<<endl;
	int cartID = user_order->AddToCart(10, 1);
	int userID = 1234;
	cout<<"************************************"<<endl;
	int orderID = user_order->PlaceOrder(cartID, userID);
	cout<<"************************************"<<endl;
#if 0
	Console.WriteLine("Facade : End CartID = {0}, OrderID = {1}",
			cartID, orderID);
	Console.ReadLine();
#endif

	return 0;
}
