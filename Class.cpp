/*
* Class.cpp
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/

#include "Class.h"

Class::Class() {
	restriction = 0;
	BAB = 0;
	skillPointperLevel = 0;
	hitPoints = 0;
	hitDice = 0;

}

Class::~Class() {
	// TODO Auto-generated destructor stub
}

void Class::setLevel(int newLevel)
{
}



int Class::getRestriction()
{
	return restriction;
}
/*
int  Class::getSkillClass(int index)
{
	return skillClassArray[index];
}

int Class::getKnowledgeClass(int index)
{
	return knowledgeClassArray[index];
}
*/
int Class::getBAB()
{
	return BAB;
}

int Class::getSkillPointPerLevel()
{
	return skillPointperLevel;
}


int Class::getHitPoints()
{
	return hitPoints;
}

int Class::getLevel()
{
	return level;
}

std::string Class::getSpecial()
{
	return std::string();
}

int Class::getFortSave()
{
	return fortSave;
}

int Class::getWillSave()
{
	return willSave;
}

int Class::getRefSave()
{
	return reflexSave;
}
