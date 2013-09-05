/*
 * LotteryFactory.h
 *
 *  Created on: 04/09/2013
 *      Author: junior
 */

#ifndef LOTTERYFACTORY_H_
#define LOTTERYFACTORY_H_

#include "Lottery.h"

namespace lotto {

class LotteryFactory {
public:
	enum State {
		California, Florida
	};
	static LotteryFactory* getInstance();
	Lottery* getLottery(State);
private:
	LotteryFactory();

};

} /* namespace lotto */
#endif /* LOTTERYFACTORY_H_ */
