/*
 * calculateStuff.cpp
 *
 *  Created on: 20.12.2016
 *      Author: RometKalpus
 */

#include "calculateStuff.h"

calculateStuff::calculateStuff() {
	// TODO Auto-generated constructor stub

}

calculateStuff::~calculateStuff() {
	// TODO Auto-generated destructor stub
}

int setSpeed(int speed,DigitalIoPin *sw1,DigitalIoPin *sw2){
	thisSpeed = speed;
	if(sw1->read()){
		speed+=100;
	}else if(sw2->read()){
		speed-=100;
	}
	return speed;
}

int getSpeedPercentage(){
	return thisSpeed*100/20000;
}

int calcSpeed(int pascal){

}



