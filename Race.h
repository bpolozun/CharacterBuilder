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

class Human : public Race {

};

class Elf : public Race {

};

class Dwarf : public Race {

};

class Gnome : public Race {

};

class HalfElf : public Race{

}

class HalfOrc : public Race {

};

#endif /* RACE_H_ */
