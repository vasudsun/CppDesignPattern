/*
 * Product.h
 *
 *  Created on: 11-Aug-2021
 *      Author: in0suv
 */

#ifndef MODEL_PRODUCT_H_
#define MODEL_PRODUCT_H_
#include<iostream>
#include"string"
using namespace std;
class Product {


private:
	int ProductID ;
	string Name ;
	string Description;
	int Quantity;
	double Cost ;
	int LockedQty ;
public:
	double getCost() const {
		return Cost;
	}

	void setCost(double cost) {
		Cost = cost;
	}

	const string& getDescription() const {
		return Description;
	}

	void setDescription(const string &description) {
		Description = description;
	}

	int getLockedQty() const {
		return LockedQty;
	}

	void setLockedQty(int lockedQty) {
		LockedQty = lockedQty;
	}

	const string& getName() const {
		return Name;
	}

	void setName(const string &name) {
		Name = name;
	}

	int getProductId() const {
		return ProductID;
	}

	void setProductId(int productId) {
		ProductID = productId;
	}

	int getQuantity() const {
		return Quantity;
	}

	void setQuantity(int quantity) {
		Quantity = quantity;
	}


};

#endif /* MODEL_PRODUCT_H_ */
