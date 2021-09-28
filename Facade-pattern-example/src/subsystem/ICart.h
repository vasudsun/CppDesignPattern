/*
 * ICart.h
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_ICART_H_
#define SUBSYSTEM_ICART_H_
#include"Product.h"
class ICart {
public:

	virtual Product* GetItemDetails(int itemID);
	virtual bool CheckItemAvailability(Product *product);
	virtual bool LockItemInStock(int itemID, int quantity);
	virtual int AddItemToCart(int itemID, int quantity);
	virtual double GetCartPrice(int cartID);



};

#endif /* SUBSYSTEM_ICART_H_ */
