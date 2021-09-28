/*
 * CartItem.h
 *
 *  Created on: 11-Aug-2021
 *      Author: in0suv
 */

#ifndef MODEL_CARTITEM_H_
#define MODEL_CARTITEM_H_

class CartItem {


private:
	int ProductID;
	int Quantity;
	double TaxPercentage;
	double cost;
	double price;

public:
	CartItem();
public:
	double getCost() const {
		return cost;
	}

	void setCost(double cost) {
		this->cost = cost;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
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

	double getTaxPercentage() const {
		return TaxPercentage;
	}

	void setTaxPercentage(double taxPercentage) {
		TaxPercentage = taxPercentage;
	}








};

#endif /* MODEL_CARTITEM_H_ */
