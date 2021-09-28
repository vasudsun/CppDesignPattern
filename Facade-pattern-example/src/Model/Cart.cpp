/*
 * Cart.cpp
 *
 *  Created on: 11-Aug-2021
 *      Author: in0suv
 */

#include "Cart.h"

int Cart::get_CartID()
{
return cart_id;

}
void Cart::set_CartID(int CartidNum)
{
cart_id=CartidNum;

}

int  Cart::get_UserID()
{

	return user_id;

}

Cart::Cart() {

shopping_cart.push_back(new CartItem);

}

void Cart::set_UserID(int UserIdNum)
{

user_id=UserIdNum;
}



CartItem* Cart::getShoppingcart()  {
	return  new CartItem();
}

void Cart::setShoppingcart(CartItem *itemCart)
{
shopping_cart.push_back(itemCart);
}

