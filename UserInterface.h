/*
 * UserInterface.h
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_
#include "LiquidCrystal.h"
#include "calculateStuff.h"
#include <cstdio>

class UserInterface {
public:
	UserInterface(LiquidCrystal *lcd);
	virtual ~UserInterface();
	void printMenu(int mode,int pascal);
private:
	LiquidCrystal *lcd;
	calculateStuff calc;
};

#endif /* USERINTERFACE_H_ */
