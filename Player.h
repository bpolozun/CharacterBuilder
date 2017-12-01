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
	int strength, wisdom, dexterity, intelligence, charisma, constitution;

	Race userRace;
	Item* itemArray;
	Class* classes;

	int skillsArray[26];

	int baseAttackBonus;
	int combatManeuverDefense;
	int combatManeuverBonus;


public:
	Player();
	virtual ~Player();

	void setRace(Race race);
	void getRace();

	void addItem(Item item);
	Item* getInventory();
	void addClass(Class newClass);
	Class* getClasses();

	void setSkillLevel(int skillLocation, int newValue);
	int getSkillLevel(int skillLocation);


};

#endif /* PLAYER_H_ */
