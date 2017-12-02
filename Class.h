#pragma once
/*
* Class.h
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/

#ifndef CLASS_H_
#define CLASS_H_

class Class {
public:
	Class();
	virtual ~Class();
	int getAttributeMod();
	int getRestriction();
};

class Fighter : public Class {

};

class Sorcerer : public Class {

};

class Paladin : public Class {

};

class Wizard : public Class {

};

class Rogue : public Class {

};

class Druid : public Class {

};

class Cleric : public Class {

};

class Monk : public Class {

};

class Barbarian : public Class {

};

class Bard : public Class {

};

#endif /* CLASS_H_ */
