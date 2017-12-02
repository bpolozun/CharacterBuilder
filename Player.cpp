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
	for (int i = 0; i < 7; i++) {
		if (&classes[i] == nullptr ){
			classes[i] = newClass;
		}
		return true;
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

void Player::onUpdateSkills()
{
}
