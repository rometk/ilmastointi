/*
 * calculateStuff.h
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#ifndef CALCULATESTUFF_H_
#define CALCULATESTUFF_H_

#include "DigitalIoPin.h"

class calculateStuff {
public:
	calculateStuff();
	virtual ~calculateStuff();
	int setSpeed(int speed,DigitalIoPin *sw1,DigitalIoPin *sw2);
	int getSpeedPercentage();
private:
	int thisSpeed;
};

#endif /* CALCULATESTUFF_H_ */
