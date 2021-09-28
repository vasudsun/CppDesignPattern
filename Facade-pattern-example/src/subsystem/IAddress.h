/*
 * IAddress.h
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_IADDRESS_H_
#define SUBSYSTEM_IADDRESS_H_
#include"Address.h"
class IAddress {

public:
	virtual Address* GetAddressDetails(int userID);
};

#endif /* SUBSYSTEM_IADDRESS_H_ */
