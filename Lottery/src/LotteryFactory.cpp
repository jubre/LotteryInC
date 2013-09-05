/*
 * LotteryFactory.cpp
 *
 *  Created on: 04/09/2013
 *      Author: junior
 */

#include "LotteryFactory.h"
#include "MegaLottery.h"

namespace lotto {

LotteryFactory::LotteryFactory() {
	srand(time(NULL));
}

Lottery* LotteryFactory::getLottery(State s) {
	if (s == LotteryFactory::California) {
		Lottery* lotto = new MegaLottery(5, 47, 27);
		return lotto;
	} else {
		Lottery* lotto = new Lottery(6, 53);
		return lotto;
	}
}

LotteryFactory* LotteryFactory::getInstance() {
	static LotteryFactory instance;
	return &instance;
}

}
