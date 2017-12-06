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
protected:
	int restriction;
	int skillClassArray[21];
	int knowledgeClassArray[10];
	int hitDice;
	int hitPoints;
	int level;
	int BAB;
	int BABMod;
	int skillPointperLevel;
	int fortSave, willSave, reflexSave;

public:
	Class();
	virtual ~Class();
	int getRestriction();
	int* getSkillClass();
	int* getKnowledgeClass();
	int getBAB();
	int getSkillPointPerLevel();
	int getFeatProgression();
	int getHitPoints();
	void increaseLevel();
	void decreaseLevel();

};


#endif /* CLASS_H_ */
