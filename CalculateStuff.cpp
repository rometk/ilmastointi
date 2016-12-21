/*
 * calculateStuff.cpp
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#include "CalculateStuff.h"

CalculateStuff::CalculateStuff() {
	// TODO Auto-generated constructor stub

}

CalculateStuff::~CalculateStuff() {
	// TODO Auto-generated destructor stub
}

int CalculateStuff::setSpeed(int speed,DigitalIoPin *sw1,DigitalIoPin *sw2){
	thisSpeed = speed;
	if(sw1->read()){
		speed+=100;
	}else if(sw2->read()){
		speed-=100;
	}
	return speed;
}

int CalculateStuff::getSpeedPercentage(){
	return thisSpeed*100/20000;
}

int CalculateStuff::calculateSpeed(int pascal, int newPascal, int speed){
	int difference = pascal - newPascal;
	if(difference > -2 && difference < 2);
	else if(difference < -2) speed += 100;
	else if(difference > 2) speed -= 100;
	
	return speed;
}


