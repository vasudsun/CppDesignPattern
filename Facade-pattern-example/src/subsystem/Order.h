/*
 * Order.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_ORDER_H_
#define SUBSYSTEM_ORDER_H_

#include <IOrder.h>

class Order: public IOrder {
public:
	int PlaceOrderDetails(int cartID, int shippingAddressID);

};

#endif /* SUBSYSTEM_ORDER_H_ */
