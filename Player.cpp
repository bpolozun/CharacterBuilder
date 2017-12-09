/*
* Player.cpp
*
*  Created on: Nov 29, 2017
*      Author: Benjamin Polozune
*/

#include "Player.h"
Player::Player() {
	for (int i = 0; i < 6; i++) {
		attributeArray[i] = 10;
	}
	setRace(7);
	classes[0] = new Barbarian();
	classes[1] = new Bard();
	classes[2] = new Cleric();
	classes[3] = new Druid();
	classes[4] = new Fighter();
	classes[5] = new  Monk();
	classes[6] = new Paladin();
	classes[7] = new Ranger();
	classes[8] = new  Rogue();
	classes[9] = new Sorcerer();
	classes[10] = new Wizard();
	hitPoints = 0;
	ageCategory = 0;
	alignmentGoodEvil = 1;
	alignmentLawfulChaotic = 1;
	playerName = "Null";
	baseAttackBonus = 0;
	setAge(ageCategory);
	onClassUpdate();
}

Player::~Player() {

}
void Player::setAttributes(int str, int dex, int con, int inte, int wis, int cha)
{
	attributeArray[0] = str;
	attributeArray[1] = dex;
	attributeArray[2] = con;
	attributeArray[3] = inte;
	attributeArray[4] = wis;
	attributeArray[5] = cha;
}

int Player::getAttribute(int index)
{
	return attributeArray[index] + attributeModArray[index];
}
void Player::setGender(bool newGender)
{
	gender = newGender;
}

int Player::getBAB()
{
	return baseAttackBonus;
}
int Player::getLevel()
{
	return overallLevel;
}
int Player::getTotalSkillPoints()
{
	return totalSkillPoints;
}
int Player::getAge()
{
	return age;
}
void Player::setAge(int newAge)
{
	int raceCode = userRace.getRaceID();
	ageCategory = newAge;

	switch (raceCode) {
	case 0:
		switch (newAge) {
		case 0:
			age = rand() % 15 + 20;
			break;
		case 1:
			age = rand() % 18 + 35;
			break;
		case 2:
			age = rand() % 17 + 53;
			break;
		case 3:
			age = rand() % 25 + 70;

		}
		break;
	case 1:
		switch (newAge) {
		case 0:
			age = rand() % 65 + 110;
			break;
		case 1:
			age = rand() % 88 + 175;
			break;
		case 2:
			age = rand() % 87 + 263;
			break;
		case 3:
			age = rand() % 400 + 350;
			break;
		}
		break;
	case 3:
		switch (newAge) {
		case 0:
			age = rand() % 85 + 40;
			break;
		case 1:
			age = rand() % 63 + 125;
			break;
		case 2:
			age = rand() % 82 + 188;
			break;
		case 3:
			age = rand() % 200 + 250;
			break;
		}
		break;
	case 4:
		switch (newAge) {
		case 0:
			age = rand() % 60 + 40;
			break;
		case 1:
			age = rand() % 50 + 100;
			break;
		case 2:
			age = rand() % 50 + 150;
			break;
		case 3:
			age = rand() % 300 + 200;
			break;
		}
		break;
	case 5:
		switch (newAge) {
		case 0:
			age = rand() % 30 + 20;
			break;
		case 1:
			age = rand() % 25 + 50;
			break;
		case 2:
			age = rand() % 25 + 75;
			break;
		case 3:
			age = rand() % 100 + 100;
			break;
		}
		break;
	case 6:
		switch (newAge) {
		case 0:
			age = rand() % 42 + 20;
			break;
		case 1:
			age = rand() % 31 + 62;
			break;
		case 2:
			age = rand() % 32 + 93;
			break;
		case 3:
			age = rand() % 60 + 125;
			break;
		}
		break;
	case 7:
		switch (newAge) {
		case 0:
			age = rand() % 16 + 14;
			break;
		case 1:
			age = rand() % 15 + 30;
			break;
		case 2:
			age = rand() % 15 + 45;
			break;
		case 3:
			age = rand() % 20 + 60;
			break;
		}
		break;
	}

	switch (newAge) {
	case 0:
		ageAttributeMods[0] = 0;
		ageAttributeMods[1] = 0;
		ageAttributeMods[2] = 0;
		ageAttributeMods[3] = 0;
		ageAttributeMods[4] = 0;
		ageAttributeMods[5] = 0;
		break;
	case 1:
		ageAttributeMods[0] = -1;
		ageAttributeMods[1] = -1;
		ageAttributeMods[2] = -1;
		ageAttributeMods[3] = 1;
		ageAttributeMods[4] = 1;
		ageAttributeMods[5] = 1;
		break;
	case 2:
		ageAttributeMods[0] = -2;
		ageAttributeMods[1] = -2;
		ageAttributeMods[2] = -2;
		ageAttributeMods[3] = 2;
		ageAttributeMods[4] = 2;
		ageAttributeMods[5] = 2;
		break;
	case 3:
		ageAttributeMods[0] = -3;
		ageAttributeMods[1] = -3;
		ageAttributeMods[2] = -3;
		ageAttributeMods[3] = 3;
		ageAttributeMods[4] = 3;
		ageAttributeMods[5] = 3;
		break;
	}
	updateAttributeMods();


}
int Player::getWeight()
{
	return 0;
}
int Player::getHeight()
{
	return 0;
}
void Player::setClassLevel(int classLocation, int newLevel)
{
	classes[classLocation]->setLevel(newLevel);
	onClassUpdate();
}
int Player::getTotalFeats()
{
	return totalFeats;
}
bool Player::getGender()
{
	return gender;
}

void Player::setRace(int race)
{
	switch (race) {
	case 1:
		userRace = Dwarf();
		break;
	case 2:
		userRace = Gnome();
		break;
	case 3:
		userRace = Elf();
		break;
	case 4:
		userRace = HalfElf();
		break;
	case 5:
		userRace = HalfOrc();
		break;
	case 6:
		userRace = Halfling();
		break;
	case 7:
		userRace = Human();
		break;
	}
	setAge(ageCategory);
	int raceCode = userRace.getRaceID();
	switch (raceCode) {
	case 0:
		height = rand() % 20 + 55;
		weight = 2.75*height;
		break;
	case 1:
		height = rand() % 16 + 53;
		weight = 2.75*height;
		break;
	case 3:
		height = rand() % 8 + 44;
		weight = 2.75*height;
		break;
	case 4:
		height = rand() % 4 + 34;
		weight = 2.75*height;
		break;
	case 5:
		height = rand() % 4 + 30;
		weight = 2.75*height;
		break;
	case 6:
		height = rand() % 16 + 60;
		weight = 2.75*height;
		break;
	case 7:
		height = rand() % 24 + 57;
		weight = 2.75*height;
		break;
	}
}

int Player::getRace()
{
	return userRace.getRaceID();
}

void Player::setAlignmentLawfulChaotic(int newAlignment)
{
	alignmentLawfulChaotic = newAlignment;
}

int Player::getAlightmentLawfulChaotic()
{
	return alignmentLawfulChaotic;
}

int Player::getAlignmentGoodEvil()
{
	return alignmentGoodEvil;
}

void Player::setAlignmentGoodEvil(int newAlignment)
{
	alignmentGoodEvil = newAlignment;
}

void Player::addItem(Item item)
{
	itemArray.push_back(item);
}

std::vector<Item> Player::getInventory()
{
	return itemArray;
}

void Player::setName(std::string newName)
{
	playerName = newName;
}
std::string Player::getName()
{
	return playerName;
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
	overallLevel = 0;
	baseAttackBonus = 0;
	hitPoints = 0;
	totalSkillPoints = 0;
	totalFeats = 0;
	willSave = 0;
	fortitudeSave = 0;
	reflexSave = 0;
	for (int i = 0; i < 11; i++) {
		if (classes[i]->getLevel() != 0) {
			baseAttackBonus += classes[i]->getBAB();
			hitPoints += classes[i]->getHitPoints();
			totalSkillPoints += classes[i]->getSkillPointPerLevel() * classes[i]->getLevel();
			totalFeats += classes[i]->getLevel() / 2;
			willSave += classes[i]->getWillSave();
			fortitudeSave += classes[i]->getFortSave();
			reflexSave += classes[i]->getRefSave();
			overallLevel += classes[i]->getLevel();
		}
	}
	combatManeuverBonus = baseAttackBonus + attributeBonuses[0];
	combatManeuverDefense = 10 + baseAttackBonus + attributeBonuses[0] + attributeBonuses[1];

}

void Player::updateAttributeMods()
{
	for (int i = 0; i < 6; i++) {
		attributeModArray[i] = 0;
		attributeModArray[i] += ageAttributeMods[i];
		attributeModArray[i] += userRace.getAttributeMods(i);
		attributeBonuses[i] = floor((attributeArray[i] + attributeModArray[i] - 10) / 2);
		combatManeuverBonus = baseAttackBonus + attributeBonuses[0];
		combatManeuverDefense = 10 + baseAttackBonus + attributeBonuses[0] + attributeBonuses[1];
	}

}

std::string Player::exportAsString()
{
	std::string returnString = "Name: ";
	returnString += playerName;
	returnString += "\n Level: ";
	returnString += std::to_string(overallLevel);
	returnString += " (";
	if (classes[0]->getLevel() != 0) {
		returnString += "| Barbarian ";
		returnString += std::to_string(classes[0]->getLevel());
	}
	if (classes[1]->getLevel() != 0) {
		returnString += "| Bard ";
		returnString += std::to_string(classes[1]->getLevel());
	}
	if (classes[2]->getLevel() != 0) {
		returnString += " | Cleric ";
		returnString += std::to_string(classes[2]->getLevel());
	}
	if (classes[3]->getLevel() != 0) {
		returnString += " | Druid ";
		returnString += std::to_string(classes[3]->getLevel());
	}
	if (classes[4]->getLevel() != 0) {
		returnString += " | Fighter ";
		returnString += std::to_string(classes[2]->getLevel());
	}
	if (classes[5]->getLevel() != 0) {
		returnString += " | Monk ";
		returnString += std::to_string(classes[5]->getLevel());
	}
	if (classes[6]->getLevel() != 0) {
		returnString += " | Paladin ";
		returnString += std::to_string(classes[6]->getLevel());
	}
	if (classes[7]->getLevel() != 0) {
		returnString += " | Ranger ";
		returnString += std::to_string(classes[7]->getLevel());
	}
	if (classes[8]->getLevel() != 0) {
		returnString += " | Rogue ";
		returnString += std::to_string(classes[8]->getLevel());
	}
	if (classes[9]->getLevel() != 0) {
		returnString += " | Sorcerer ";
		returnString += std::to_string(classes[9]->getLevel());
	}
	if (classes[10]->getLevel() != 0) {
		returnString += " | Wizard ";
		returnString += std::to_string(classes[10]->getLevel());
	}
	returnString += " | )";
	returnString += "\n Race: ";
	returnString += userRace.getName();
	returnString += "\n Age: ";
	returnString += std::to_string(age);
	returnString += "\n Height: ";
	returnString += std::to_string(height);
	returnString += "\n Weight: ";
	returnString += std::to_string(weight);
	returnString += "\n Gender: ";
	if (gender == false)
		returnString += "Male";
	else
		returnString += "Female";
	returnString += "\n Alignment: ";
	switch (alignmentLawfulChaotic) {
	case 0:
		returnString += "Chaotic ";
		break;
	case 1:
		if (alignmentGoodEvil == 1)
			returnString += "True ";
		else
			returnString += "Neutral ";
		break;
	case 2:
		returnString += "Lawful ";
		break;
	}
	switch (alignmentGoodEvil) {
	case 0:
		returnString += "Good";
		break;
	case 1:
		returnString += "Neutral";
		break;
	case 2:
		returnString += "Evil";
		break;
	}

	returnString += "\n SkillPoints: ";
	returnString += std::to_string(totalSkillPoints);
	returnString += "\n Feats: ";
	returnString += std::to_string(totalFeats);
	returnString += "\n \n ATTRIBUTES:";
	returnString += "\n Strength: ";
	returnString += std::to_string(attributeArray[0] + attributeModArray[0]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[0]);
	returnString += "\n Dexterity: ";
	returnString += std::to_string(attributeArray[1] + attributeModArray[1]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[1]);
	returnString += "\n Constitution: ";
	returnString += std::to_string(attributeArray[2] + attributeModArray[2]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[2]);
	returnString += "\n Intelligence: ";
	returnString += std::to_string(attributeArray[3] + attributeModArray[3]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[3]);
	returnString += "\n Wisdom: ";
	returnString += std::to_string(attributeArray[4] + attributeModArray[4]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[4]);
	returnString += "\n Charisma: ";
	returnString += std::to_string(attributeArray[5] + attributeModArray[5]);
	returnString += " | ";
	returnString += std::to_string(attributeBonuses[5]);
	returnString += "\n Hit Points: ";
	returnString += std::to_string(hitPoints);
	returnString += "\n \n COMBAT MODIFIERS: ";
	returnString += "\n \n BAB: ";
	returnString += std::to_string(baseAttackBonus);
	returnString += "\n CMB: ";
	returnString += std::to_string(combatManeuverBonus);
	returnString += "\n CMD: ";
	returnString += std::to_string(combatManeuverDefense);
	returnString += "\n \n SAVES:";
	returnString += "\n Fortitude Save: ";
	returnString += std::to_string(fortitudeSave);
	returnString += "\n Reflex Save: ";
	returnString += std::to_string(reflexSave);
	returnString += "\n Will Save: ";
	returnString += std::to_string(willSave);
	returnString += "\n \n Class abilities: ";
	for (int i = 0; i < 11; i++) {
		if (classes[i]->getLevel() != 0) {
			returnString += classes[i]->getSpecial();
			returnString += "\n ";
		}
	}

	return returnString;


}