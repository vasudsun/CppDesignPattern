/*
 * ShoppingCartDetails.cpp
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#include <ShoppingCartDetails.h>

int ShoppingCartDetails::AddItemToCart(int itemID, int Quantity)
{
	cout<<"SubSystem Cart : AddItemToCart \n";
	return 15;
}

bool ShoppingCartDetails::CheckItemAvailability(Product *product)
{
	cout<<"SubSystem Cart : CheckItemAvailability\n";
	  return true;
}

double ShoppingCartDetails::GetCartPrice(int cartID)
{
	cout<<"SubSystem Cart : AddItemToCart \n";

	return 1000;
}

ShoppingCartDetails::ShoppingCartDetails()
{

	cout<<"SubSystem Cart : GetCartPrice\n";
}

Product* ShoppingCartDetails::GetItemDetails(int itemID)
{
	cout<<"SubSystem Cart : GetItemDetails \n";
	return new Product;
}

bool ShoppingCartDetails::LockItemInStock(int itemID, int quantity) {
	cout<<"SubSystem Cart : LockItemInStock \n";
	return true;
}
