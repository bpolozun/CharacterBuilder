#pragma once
/*
* Race.h
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/
#include <string>

#ifndef RACE_H_
#define RACE_H_

class Race {
protected:
	std::string Name;
	int raceID;
	int attributeMods[6];
public:
	Race();
	virtual ~Race();
	std::string getName();
	int getRaceID();
	int getAttributeMods(int index);
};
#endif /* RACE_H_ */
