/*
 * ShoppingCartDetails.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_SHOPPINGCARTDETAILS_H_
#define SUBSYSTEM_SHOPPINGCARTDETAILS_H_

#include <ICart.h>
#include"Product.h"

class ShoppingCartDetails: public ICart {

public:
	ShoppingCartDetails();
	int AddItemToCart(int itemID, int Quantity);
	bool CheckItemAvailability(Product *product);
	double GetCartPrice(int cartID);
	Product* GetItemDetails(int itemID);
	bool LockItemInStock(int itemID, int quantity);

};

#endif /* SUBSYSTEM_SHOPPINGCARTDETAILS_H_ */
