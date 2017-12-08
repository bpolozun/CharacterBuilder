/*
* Race.cpp
*
*  Created on: Nov 29, 2017
*      Author: itcs3112-user
*/

#include "Race.h"

Race::Race() {
	// TODO Auto-generated constructor stub

}

Race::~Race() {
	// TODO Auto-generated destructor stub
}

std::string Race::getName()
{
	return Name;
}

int Race::getRaceID()
{
	return raceID;
}

int Race::getAttributeMods(int index)
{
	return attributeMods[index];
}
