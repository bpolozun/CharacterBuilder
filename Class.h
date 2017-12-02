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
private:
	int restriction;
	int skillClassArray[20];
	int knowledgeClassArray[10];
public:
	Class();
	virtual ~Class();
	int getRestriction();
	int* getSkillClass();
	int* getKnowledgeClass();
};


#endif /* CLASS_H_ */
