#pragma once
/*
Class.h

Superclass for the various actual classes.
*/

#ifndef CLASS_H_
#define CLASS_H_
#include <string>
class Class {
protected:
	int restriction; //Value to inform if a class is restricted in alignment. 0 if unrestricted.
	//int skillClassArray[21]; //Class skill array. Unimplemented
	//int knowledgeClassArray[10]; //Class skill array for knowledge.
	int hitDice; //Hit dice value. Unused, potentially implementable if randomized gains rather than fixed values were used.
	int hitPoints; //Hit points a given class provides to the player.
	int level; //Level of the class.
	int BAB; //Base attack bonus of the class.
	int skillPointperLevel; //How many skillpoints gained per level of the class.
	int fortSave, willSave, reflexSave; //Saves of the class.

public:
	/*
	Constructor method for class. Never called.
	*/
	Class();
	/*
	Virtual destructor for class. Should never be used.
	*/
	virtual ~Class();
	/*
	Virtual method for set level in the subclasses.

	@param newLevel Value to be set.
	*/
	virtual void setLevel(int newLevel);
	/*
	Virtual fetch method.

	@return The level of the class object.
	*/
	virtual int getLevel();
	/*
	Virtual fetch method.

	@return String containing special abilities or spells.
	*/
	virtual std::string getSpecial();
	/*
	Fetch method for restrictions.

	@return Integer state of restrictions.
	*/
	int getRestriction();
	/*
	Fetch method for whether a skill is a class skill

	@param index of the skill to be queried.
	@return Value of the skill returned. 3 is class, 0 is non-class.
	*/
	int getSkillClass(int index);
	/*
	Fetch method for whether a knowledge skill is a class skill

	@param index of the skill to be queried.
	@return Value of the skill returned. 3 is class, 0 is non-class.
	*/
	int getKnowledgeClass(int index);
	/*
	Fetch method for BAB

	@return The BAB provided by the class to the player.
	*/
	int getBAB();
	/*
	Fetch method for skill points per level provided by the class.

	@return Integer containing the number of skill points provided per level of the class.
	*/
	int getSkillPointPerLevel();
	int getHitPoints();
		/*
		Fetch method for fortSave

		@return The value provided by the class to the player's overall fort save.
		*/
	int getFortSave();
	/*
	Fetch method for willSave

	@return The value provided by the class to the player's overall will save.
	*/
	int getWillSave();
	/*
	Fetch method for reflexSave

	@return The value provided by the class to the player's overall reflex save.
	*/
	int getRefSave();

};


#endif /* CLASS_H_ */
