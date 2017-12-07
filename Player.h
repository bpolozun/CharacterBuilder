#pragma once
/*
* Player.h
*
*  Created on: Nov 29, 2017
*      Author: itcs3112-user
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Class.h"
#include "Item.h"
#include "Race.h"
#include "Feat.h"
#include <iostream>
#include <vector>

class Player {

private:
	//Stores ability scores in order Str, Dex, Con, Int, Wis, Cha
	int attributeArray[6];
	//Stores modifiers to an attribute. Race, Age, etc.
	int attributeModArray[6];

	//Races are user defined.
	Race userRace;
	//Dynamically sized array of items.
	std::vector<Feat> featArray;
	std::vector<Item> itemArray;
	//As certain classes are mutually incompatible due to alignment restrictions, only seven classes can be stored. As such, this is a standard array.
	Class classes[7];
	int hitPoints;
	/*
	Stores the players skills in an array in the following order:
	0: Acrobatics
	1: Appraise.
	2: Bluff
	3. Climb
	4: Diplomacy
	5: Disable Device
	6: Disguise
	7: Escape ARtist
	8: Fly
	9: Handle Animal
	10: Heal
	11: Intimidate
	12: Perception
	13: Perform
	14: Ride
	15: Sense Motive
	16: Sleight of Hand
	17: Spellcraft
	18: Stealth
	19: Survival
	2: Swim
	21: Use Magic Device
	*/
	int skillsArray[21];
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
	int age, weight, height;
	bool gender;
	int overallLevel;
	int totalSkillPoints;
	int totalFeats;
	int availableFeats;
	int availableSkills;
	int usedFeats;
	int usedSkills;


public:
	Player();
	virtual ~Player();

	void setRace(Race race);
	Race getRace();
	void setAlignmentLawfulChaotic(int newAlignment);
	int getAlightmentLawfulChaotic();
	int getAlignmentGoodEvil();
	void setAlignmentGoodEvil(int newAlignment);

	void addItem(Item item);
	std::vector<Item> getInventory();
	bool addClass(Class newClass);
	Class getClasses();

	void setSkillLevel(int skillLocation, int newValue);
	int getSkillLevel(int skillLocation);

	void onClassUpdate();



};

#endif /* PLAYER_H_ */
