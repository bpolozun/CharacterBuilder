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
#include "Human.H"
#include "HalfElf.h"
#include "Dwarf.h"
#include "Halfling.h"
#include "HalfOrc.h"
#include "Gnome.h"
#include "Elf.h"
#include "Barbarian.h"
#include "Bard.h"
#include "Cleric.h"
#include "Druid.h"
#include "Fighter.h"
#include "Monk.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Sorcerer.h"
#include "Wizard.h"
#include <iostream>
#include <vector>
#include <cstdlib>

class Player {

private:
	//Stores ability scores in order Str, Dex, Con, Int, Wis, Cha
	int attributeArray[6];
	//Stores modifiers to an attribute. Race, Age, etc.
	int attributeModArray[6];

	//Races are user defined.
	Race userRace;
	//Dynamically sized array of items.
	std::vector<Item> itemArray;

	/*Classes are in the following order:
	0. Barbarian
	1. Bard.
	2. Cleric
	3. Druid
	4. Fighter
	5. Monk
	6. Paladin
	7. Ranger
	8. Rogue
	9. Sorcerer
	10. Wizard
	*/
	
	Class classes[11];
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
	int skillModArray[21];
	/*
	Knowledge skills are set in the following order:
	0. Arcana.
	1. Dungeoneering
	2. Engineering.
	3. Geography.
	4. History.
	5. Local.
	6. Nature.
	7. Nobility.
	8. Planes.
	9. Religion.
	*/
	int ageCategory;
	int ageAttributeMods[6];
	int attributeBonuses[6];
	int knowledgeArray[10];
	int knowledgeModArray[10];
	int alignmentGoodEvil;
	int alignmentLawfulChaotic;
	std::string playerName;

	int baseAttackBonus;
	int combatManeuverDefense;
	int combatManeuverBonus;
	int age, weight, height;
	bool gender;
	int overallLevel;
	int totalSkillPoints;
	int totalFeats;
	int willSave;
	int reflexSave;
	int fortitudeSave;


public:
	Player();
	virtual ~Player();
	void setName(std::string newName);
	std::string getName();
	void setAttributes(int str, int dex, int con, int inte, int wis, int cha);
	int getAttribute(int index);
	void setGender(bool newGender);
	bool getGender();
	int getBAB();
	int getLevel();
	int getTotalSkillPoints();
	int getTotalFeats();
	int getAge();
	void setAge(int newAge);
	int getWeight();
	int getHeight();
	void setClassLevel(int classLocation, int newLevel);


	void setRace(Race race);
	int getRace();
	void setAlignmentLawfulChaotic(int newAlignment);
	int getAlightmentLawfulChaotic();
	int getAlignmentGoodEvil();
	void setAlignmentGoodEvil(int newAlignment);

	void addItem(Item item);
	std::vector<Item> getInventory();


	void setSkillLevel(int skillLocation, int newValue);
	int getSkillLevel(int skillLocation);

	void onClassUpdate();
	void updateAttributeMods();



};

#endif /* PLAYER_H_ */
