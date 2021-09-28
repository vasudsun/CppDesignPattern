/*
 * UserOrder.cpp
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#include "UserOrder.h"
#include"ICart.h"
#include"Product.h"
#include"AddressDetails.h"
#include"ShoppingCartDetails.h"
#include"Wallet.h"
#include"Order.h"
#include"Tax.h"

int UserOrder::AddToCart(int itemId, int qty) {


	ICart* userCart = new ShoppingCartDetails();
	int cartID = 0;
	//Step 1 : GetItem
	Product *product =userCart->GetItemDetails(itemId);
	//Step 2 : Check Availability
	if (userCart->CheckItemAvailability(product))
	{
		//Step 3 : Lock Item in the Stock
		userCart->LockItemInStock(itemId, qty);
		//Step 4 : Add Item to the cart
		cartID = userCart->AddItemToCart(itemId, qty);
	}

	return cartID;
}

int UserOrder::PlaceOrder(int cartID, int userID)
{


	int orderID = -1;
	IWallet *wallet = new Wallet();
	ITax *tax = new Tax();
	ICart *userCart = new ShoppingCartDetails();
	IAddress *address = new AddressDetails();
	IOrder *order = new Order();
	//Step 1 : Get Tax percentage by State
	double stateTax = tax->GetTaxByState("ABC");
	//Step 2 : Apply Tax on the Cart Items
	tax->ApplyTax(cartID, stateTax);
	//Step 3 : Get user Wallet balance
	double userWalletBalance = wallet->GetUserBalance(userID);
	//Step 4 : Get the cart items price
	double cartPrice = userCart->GetCartPrice(cartID);
	//Step 5 : Compare the balance and price
	if (userWalletBalance > cartPrice)
	{
		//Step 6 : Get user Address and set to cart
		Address *userAddress = address->GetAddressDetails(userID);
		//Step 7 : Place the order
		orderID = order->PlaceOrderDetails(cartID, userAddress->AddressID);

	}

	return orderID;

}
