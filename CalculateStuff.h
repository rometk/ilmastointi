/*
 * calculateStuff.h
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#ifndef CALCULATESTUFF_H_
#define CALCULATESTUFF_H_

#include "DigitalIoPin.h"

class CalculateStuff {
public:
	CalculateStuff();
	virtual ~CalculateStuff();
	int setSpeed(int speed,DigitalIoPin *sw1,DigitalIoPin *sw2);
	int getSpeedPercentage();
	int calculateSpeed(int pascal, int newPascal, int speed);
	int setPascal(int newPascal);
private:
	int thisSpeed;
};

#endif /* CALCULATESTUFF_H_ */
