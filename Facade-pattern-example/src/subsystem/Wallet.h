/*
 * Wallet.h
 *
 *  Created on: 13-Aug-2021
 *      Author: in0suv
 */

#ifndef SUBSYSTEM_WALLET_H_
#define SUBSYSTEM_WALLET_H_

#include <IWallet.h>

class Wallet: public IWallet {
public:
	double GetUserBalance(int userID);
};

#endif /* SUBSYSTEM_WALLET_H_ */
