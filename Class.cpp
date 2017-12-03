/*
* Class.cpp
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/

#include "Class.h"

Class::Class() {
	// TODO Auto-generated constructor stub

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

int Class::getFeatProgression()
{
	return featProgression;
}

int Class::getHitPoints()
{
	return hitPoints;
}

void Class::increaseLevel()
{
	level++;
	BAB += 1 * BABMod;
	hitPoints += .5*hitDice;
}

void Class::decreaseLevel()
{
	{
		level--;
		BAB -= 1 * BABMod;
		hitPoints -= .5*hitDice;
	}
}

