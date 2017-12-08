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

}

Class::~Class() {
	// TODO Auto-generated destructor stub
}


int Class::getRestriction()
{
	return restriction;
}

int * Class::getSkillClass()
{
	return skillClassArray;
}

int * Class::getKnowledgeClass()
{
	return knowledgeClassArray;
}

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

