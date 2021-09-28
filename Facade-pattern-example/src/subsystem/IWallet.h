/*
 * IWallet.h
 *
 *  Created on: 28-Jul-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_IWALLET_H_
#define SUBSYSTEM_IWALLET_H_

class IWallet {
public:
	virtual double GetUserBalance(int userID);
};

#endif /* SUBSYSTEM_IWALLET_H_ */
