/*
 * IUserOrder.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef FACADELAYER_IUSERORDER_H_
#define FACADELAYER_IUSERORDER_H_

class IUserOrder {
public:
	virtual int AddToCart(int itemId, int qty);
	virtual int PlaceOrder(int cartID, int userID);
};

#endif /* FACADELAYER_IUSERORDER_H_ */
