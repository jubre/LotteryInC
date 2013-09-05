/*
 * Lottery.h
 *
 *  Created on: 04/09/2013
 *      Author: junior
 */

#ifndef LOTTERY_H_
#define LOTTERY_H_
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>

using namespace std;

namespace lotto {
class Lottery {
protected:
	int ticketSize, maxNum;
	int* generateNumbers();

public:
	Lottery(int, int);
	virtual ~Lottery();
	virtual string printTicket();
};
}

#endif /* LOTTERY_H_ */
