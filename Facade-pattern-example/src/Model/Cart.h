/*
 * Cart.h
 *
 *  Created on: 11-Aug-2021
 *      Author: in0suv
 */

#ifndef MODEL_CART_H_
#define MODEL_CART_H_
#include<iostream>
#include<vector>
#include"CartItem.h"
using namespace std;

class Cart {

private:

	int cart_id;
	int user_id;
public:
	vector<CartItem*> shopping_cart;


public :

Cart();
	int get_CartID();
	void set_CartID(int idNum);
    int get_UserID ();
    void set_UserID (int idUser );
    void setShoppingcart(CartItem *itemCart);
    CartItem* getShoppingcart();

};

#endif /* MODEL_CART_H_ */
