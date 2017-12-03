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
private:
	std::string Name;

	int attributeMods[6];
public:
	Race();
	virtual ~Race();
};
#endif /* RACE_H_ */
