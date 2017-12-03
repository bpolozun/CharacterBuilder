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
	int level;
	int BAB;
public:
	Class();
	virtual ~Class();
	int getRestriction();
	int* getSkillClass();
	int* getKnowledgeClass();
};


#endif /* CLASS_H_ */
