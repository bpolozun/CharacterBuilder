/*
* Player.cpp
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/

#include "Player.h"

Player::Player() {

}

Player::~Player() {

}

void Player::setRace(Race race)
{
	userRace = race;
}

Race Player::getRace()
{
	return Race();
}

void Player::addItem(Item item)
{
	if (itemArraySize >= .9*itemArrayCapacity) {
		
	}
}

Item * Player::getInventory()
{
	return nullptr;
}

bool Player::addClass(Class newClass)
{

	int classRestriction;
	newClass.getRestriction();
	switch(classRestriction) {
		//case 1 is restricted to chaotic only, for barbarians.
	case 1:
		if (alignmentLawfulChaotic != 0) {
			break;
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (&classes[i] == nullptr) {
					classes[i] = newClass;
				}
				return true;
			}
			return false;
		}
		//Case 2 is neutral only, for druids.
	case 2:
		if (alignmentLawfulChaotic != 1) {
			break;
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (&classes[i] == nullptr) {
					classes[i] = newClass;
				}
				return true;
			}
			return false;
		}
		//Case 3 is lawful only, for monks.
	case 3:
		if (alignmentLawfulChaotic != 2) {
			break;
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (&classes[i] == nullptr) {
					classes[i] = newClass;
				}
				return true;
			}
			return false;
		}
		//Case 4 is for lawful good, for Paladins.
	case 4:
		if (alignmentLawfulChaotic != 2) {
			return false;
		}
		else if (alignmentGoodEvil != 0) {
			return false;
		}
		else {
			for (int i = 0; i < 7; i++) {
				if (&classes[i] == nullptr) {
					classes[i] = newClass;
				}
				return true;
			}
			return false;
		}
	case 0 :
		for (int i = 0; i < 7; i++) {
			if (&classes[i] == nullptr) {
				classes[i] = newClass;
			}
			return true;
		}
	}
	return false;
}

Class Player::getClasses()
{
	return *classes;
}

void Player::setSkillLevel(int skillLocation, int newValue)
{
	skillsArray[skillLocation] = newValue;
}

int Player::getSkillLevel(int skillLocation)
{
	return skillsArray[skillLocation];
}

void Player::onClassUpdate()
{
	baseAttackBonus = 0;
	for (int i = 0; i < 7, i++) {
		baseAttackBonus += classes[i].getBAB;
		
	}

}
