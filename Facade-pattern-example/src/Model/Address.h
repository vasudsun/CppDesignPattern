/*
 * Address.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef MODEL_ADDRESS_H_
#define MODEL_ADDRESS_H_
#include<string>
#include<iostream>
using namespace std;
class Address {

	public:

	int AddressID ;
	string AddressDetails ;
	string PinCode;
	string Phone ;
	string Country ;
	string State;
	string City;

	const string& getAddressDetails() const {
		return AddressDetails;
	}

	void setAddressDetails(const string &addressDetails) {
		AddressDetails = addressDetails;
	}

	int getAddressId() const {
		return AddressID;
	}

	void setAddressId(int addressId) {
		AddressID = addressId;
	}

	const string& getCity() const {
		return City;
	}

	void setCity(const string &city) {
		City = city;
	}

	const string& getCountry() const {
		return Country;
	}

	void setCountry(const string &country) {
		Country = country;
	}

	const string& getPhone() const {
		return Phone;
	}

	void setPhone(const string &phone) {
		Phone = phone;
	}

	const string& getPinCode() const {
		return PinCode;
	}

	void setPinCode(const string &pinCode) {
		PinCode = pinCode;
	}

	const string& getState() const {
		return State;
	}

	void setState(const string &state) {
		State = state;
	}
};

#endif /* MODEL_ADDRESS_H_ */
