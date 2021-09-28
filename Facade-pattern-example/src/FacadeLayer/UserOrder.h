/*
 * UserOrder.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef FACADELAYER_USERORDER_H_
#define FACADELAYER_USERORDER_H_
#include"IuserOrder.h"

class UserOrder :public IUserOrder{

	public:
	int AddToCart(int itemId, int qty );
	int PlaceOrder(int cartID, int userID);
};

#endif /* FACADELAYER_USERORDER_H_ */
