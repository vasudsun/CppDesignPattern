/*
 * ICart.cpp
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#include "ICart.h"
#include"Product.h"

Product* ICart::GetItemDetails(int itemID) {
}

bool ICart::CheckItemAvailability(Product *product) {
}

bool ICart::LockItemInStock(int itemID, int quantity) {
}

int ICart::AddItemToCart(int itemID, int quantity) {
}

double ICart::GetCartPrice(int cartID) {
}
