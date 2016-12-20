/*
 * UserInterface.cpp
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#include "UserInterface.h"
static int lcdState;
//PERSE
UserInterface::UserInterface(LiquidCrystal *getLcd) {
	lcd = getLcd;
	lcd->begin(16,2);
}

UserInterface::~UserInterface() {
	// TODO Auto-generated destructor stub
}

void UserInterface::printMenu(int lcdState,int pascal){
	char[32] speed;
	char[32] pascal;

	//0 is manual mode, 1 automatic mode, 2 is pressure set mode
	switch(lcdState) {
		case 1 :
			sprintf(speed,"Speed %3lu%",calc.getSpeedPercentage());
			lcd->setCursor(0,0);
			lcd->print(speed);

			sprintf(pascal,"Manual %2lu Pa",pascal);
			lcd->setCursor(0,1);
			lcd->print(pascal);
			break;
		case 2 :
			break;
		case 3 :
			break;
	}
	
}



