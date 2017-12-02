#pragma once
/*
* Player.h
*
*  Created on: Nov 29, 2017
*      Author: itcs3112-user
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Class.h";
#include "Item.h";
#include "Race.h"
#include <iostream>;

class Player {

private:
	//Stores ability scores in order Str, Dex, Con, Int, Wis, Cha
	int attributeArray[6];
	//Stores modifiers to an attribute. Race, Age, etc.
	int attributeModArray[6];

	//Races are user defined.
	Race userRace;
	//Dynamically sized array of items.
	Feat *featArray;
	Item* itemArray;
	int itemArraySize, itemArrayCapacity;
	//As certain classes are mutually incompatible due to alignment restrictions, only seven classes can be stored. As such, this is a standard array.
	Class classes[7];
	/*
	Stores the players skills in an array in the following order:
	0: Acrobatics
	1: Appraise.
	2: Bluff
	3: Diplomacy
	4: Disable Device
	5: Disguise
	6: Escape ARtist
	7: Fly
	8: Handle Animal
	9: Heal
	10: Intimidate
	11: Perception
	12: Perform
	13: Ride
	14: Sense Motive
	15: Sleight of Hand
	16: Spellcraft
	17: Stealth
	18: Survival
	19: Swim
	20: Use Magic Device
	*/
	int skillsArray[20];
	int skillModArray[20];
	int craftArray[6];
	int knowledgeArray[10];
	int knowledgeModArray[10];
	int ProfessionArray[30];
	int alignmentGoodEvil;
	int alignmentLawfulChaotic;


	int baseAttackBonus;
	int combatManeuverDefense;
	int combatManeuverBonus;


public:
	Player();
	virtual ~Player();

	void setRace(Race race);
	Race getRace();

	void addItem(Item item);
	Item* getInventory();
	bool addClass(Class newClass);
	Class getClasses();

	void setSkillLevel(int skillLocation, int newValue);
	int getSkillLevel(int skillLocation);



};

#endif /* PLAYER_H_ */
