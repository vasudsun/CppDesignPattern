/*
 * AddressDetails.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_ADDRESSDETAILS_H_
#define SUBSYSTEM_ADDRESSDETAILS_H_

#include <IAddress.h>
#include"Address.h"

class AddressDetails: public IAddress {
public:
	Address* GetAddressDetails(int userID);
};

#endif /* SUBSYSTEM_ADDRESSDETAILS_H_ */
