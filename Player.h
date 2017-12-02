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
	int attributeArray[6];
	int attributeModArray[6];

	Race userRace;
	Item* itemArray;
	Class classes[7];

	int skillsArray[26];

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
	void addClass(Class newClass);
	Class* getClasses();

	void setSkillLevel(int skillLocation, int newValue);
	int getSkillLevel(int skillLocation);

	void onUpdateSkills();


};

#endif /* PLAYER_H_ */
