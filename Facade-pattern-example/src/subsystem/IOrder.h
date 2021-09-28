/*
 * IOrder.h
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_IORDER_H_
#define SUBSYSTEM_IORDER_H_

class IOrder {
public:
	  virtual int PlaceOrderDetails(int cartID, int shippingAddressID);
};

#endif /* SUBSYSTEM_IORDER_H_ */
