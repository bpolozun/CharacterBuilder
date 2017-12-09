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
	userRace = Human();
	classes[0] = Barbarian();
	classes[1] = Bard();
	classes[2] = Cleric();
	classes[3] = Druid();
	classes[4] = Fighter();
	classes[5] = Monk();
	classes[6] = Paladin();
	classes[7] = Ranger();
	classes[8] = Rogue();
	classes[9] = Sorcerer();
	classes[10] = Wizard();

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
		case 1:
			age = rand() % 18 + 35;
		case 2:
			age = rand() % 17 + 53;
		case 3:
			age = rand() % 25 + 70;
		}
	case 1:
		switch (newAge) {
		case 0:
			age = rand() % 65 + 110;
		case 1:
			age = rand() % 88 + 175;
		case 2:
			age = rand() % 87 + 263;
		case 3:
			age = rand() % 400 + 350;
		}
	case 3:
		switch (newAge) {
		case 0:
			age = rand() % 85 + 40;
		case 1:
			age = rand() % 63 + 125;
		case 2:
			age = rand() % 82 + 188;
		case 3:
			age = rand() % 200 + 250;
		}
	case 4:
		switch (newAge) {
		case 0:
			age = rand() % 60 + 40;
		case 1:
			age = rand() % 50 + 100;
		case 2:
			age = rand() % 50 + 150;
		case 3:
			age = rand() % 300 + 200;
		}
	case 5:
		switch (newAge) {
		case 0:
			age = rand() % 30 + 20;
		case 1:
			age = rand() % 25 + 50;
		case 2:
			age = rand() % 25 + 75;
		case 3:
			age = rand() % 100 + 100;
		}
	case 6:
		switch (newAge) {
		case 0:
			age = rand() % 42 + 20;
		case 1:
			age = rand() % 31 + 62;
		case 2:
			age = rand() % 32 + 93;
		case 3:
			age = rand() % 60 + 125;
		}
	case 7:
		switch (newAge) {
		case 0:
			age = rand() % 16 + 14;
		case 1:
			age = rand() % 15 + 30;
		case 2:
			age = rand() % 15 + 45;
		case 3:
			age = rand() % 20 + 60;
		}
	}

	switch (newAge) {
	case 0:
		ageAttributeMods[0] = 0;
		ageAttributeMods[1] = 0;
		ageAttributeMods[2] = 0;
		ageAttributeMods[3] = 0;
		ageAttributeMods[4] = 0;
		ageAttributeMods[5] = 0;
	case 1:
		ageAttributeMods[0] = -1;
		ageAttributeMods[1] = -1;
		ageAttributeMods[2] = -1;
		ageAttributeMods[3] = 1;
		ageAttributeMods[4] = 1;
		ageAttributeMods[5] = 1;
	case 2:
		ageAttributeMods[0] = -2;
		ageAttributeMods[1] = -2;
		ageAttributeMods[2] = -2;
		ageAttributeMods[3] = 2;
		ageAttributeMods[4] = 2;
		ageAttributeMods[5] = 2;
	case 3:
		ageAttributeMods[0] = -3;
		ageAttributeMods[1] = -3;
		ageAttributeMods[2] = -3;
		ageAttributeMods[3] = 3;
		ageAttributeMods[4] = 3;
		ageAttributeMods[5] = 3;
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
	classes[classLocation].setLevel(newLevel);
}
int Player::getTotalFeats()
{
	return totalFeats;
}
bool Player::getGender()
{
	return gender;
}

void Player::setRace(Race race)
{
	userRace = race;
	setAge(ageCategory);
	int raceCode = race.getRaceID();
	switch (raceCode) {
	case 0:
		height = rand() % 20 + 55;
		weight = 2.75*height;
	case 1:
		height = rand() % 16 + 53;
		weight = 2.75*height;
	case 3:
		height = rand() % 8 + 44;
		weight = 2.75*height;
	case 4:
		height = rand() % 4 + 34;
		weight = 2.75*height;
	case 5:
		height = rand() % 4 + 30;
		weight = 2.75*height;
	case 6:
		height = rand() % 16 + 60;
		weight = 2.75*height;
	case 7:
		height = rand() % 24 + 57;
		weight = 2.75*height;
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
	for (int i = 0; i < 21; i++) {
		skillModArray[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		knowledgeModArray[i] = 0;
	}
	for (int i = 0; i < 7; i++) {
		baseAttackBonus += classes[i].getBAB();
		hitPoints += classes[i].getHitPoints();
		for (int j = 0; j < 21; j++) {
			skillModArray[j] += classes[i].getSkillClass(j);
		}
		for (int j = 0; j < 21; j++) {
			knowledgeModArray[j] += classes[i].getKnowledgeClass(j);
		}
		totalSkillPoints += classes[i].getSkillPointPerLevel() * classes[i].getLevel();
		totalFeats += classes[i].getLevel() / 2;
		willSave += classes[i].getWillSave();
		fortitudeSave += classes[i].getFortSave();
		reflexSave += classes[i].getRefSave();
		overallLevel += classes[i].getLevel();
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
	returnString += overallLevel;
	returnString += " (";
	if (classes[0].getLevel() != 0) {
		returnString += "| Barbarian ";
		returnString += classes[0].getLevel();
	}
	if (classes[1].getLevel() != 0) {
		returnString += "| Bard ";
		returnString += classes[1].getLevel();
	}
	if (classes[2].getLevel() != 0) {
		returnString += " | Cleric ";
		returnString += classes[2].getLevel();
	}
	if (classes[3].getLevel() != 0) {
		returnString += " | Druid ";
		returnString += classes[3].getLevel();
	}
	if (classes[4].getLevel() != 0) {
		returnString += " | Fighter ";
		returnString += classes[2].getLevel();
	}
	if (classes[5].getLevel() != 0) {
		returnString += " | Monk ";
		returnString += classes[5].getLevel();
	}
	if (classes[6].getLevel() != 0) {
		returnString += " | Paladin ";
		returnString += classes[6].getLevel();
	}
	if (classes[7].getLevel() != 0) {
		returnString += " | Ranger ";
		returnString += classes[7].getLevel();
	}
	if (classes[8].getLevel() != 0) {
		returnString += " | Rogue ";
		returnString += classes[8].getLevel();
	}
	if (classes[9].getLevel() != 0) {
		returnString += " | Sorcerer ";
		returnString += classes[9].getLevel();
	}
	if (classes[10].getLevel() != 0) {
		returnString += " | Wizard ";
		returnString += classes[10].getLevel();
	}
	returnString += " | )";
	returnString += "\n Race: ";
	returnString += userRace.getName();
	returnString += "\n Age: ";
	returnString += age;
	returnString += "\n Height: ";
	returnString += height;
	returnString += "\n: Weight";
	returnString += weight;
	returnString += "\n Gender: ";
	if (gender == false)
		returnString += "Male";
	else
		returnString += "Female";
	returnString += "\n Alignment: ";
	switch (alignmentLawfulChaotic) {
	case 0:
		returnString += "Chaotic ";
	case 1:
		if (alignmentGoodEvil == 1)
			returnString += "True ";
		else
			returnString += "Neutral ";
	case 2:
		returnString += "Lawful ";
	}
	switch (alignmentGoodEvil) {
	case 0:
		returnString += "Good";
	case 1:
		returnString += "Neutral";
	case 2:
		returnString += "Evil";
	}

	returnString += "\n SkillPoints: ";
	returnString += totalSkillPoints;
	returnString += "\n Feats: ";
	returnString += totalFeats;
	returnString += "\n \n ATRIBUTES:";
	returnString += "\n Strength: ";
	returnString += attributeArray[0] + attributeModArray[0];
	returnString += " | ";
	returnString += attributeBonuses[0];
	returnString += "\n Dexterity: ";
	returnString += attributeArray[1] + attributeModArray[1];
	returnString += " | ";
	returnString += attributeBonuses[1];
	returnString += "\n Constitution: ";
	returnString += attributeArray[2] + attributeModArray[2];
	returnString += " | ";
	returnString += attributeBonuses[2];
	returnString += "\n Intelligence: ";
	returnString += attributeArray[3] + attributeModArray[3];
	returnString += " | ";
	returnString += attributeBonuses[3];
	returnString += "\n Wisdom: ";
	returnString += attributeArray[4] + attributeModArray[4];
	returnString += " | ";
	returnString += attributeBonuses[4];
	returnString += "\n Charisma: ";
	returnString += attributeArray[5] + attributeModArray[5];
	returnString += " | ";
	returnString += attributeBonuses[5];
	returnString += "\n \n COMBAT MODIFIERS: ";
	returnString += "\n \n BAB: ";
	returnString += baseAttackBonus;
	returnString += "\n CMB: ";
	returnString += combatManeuverBonus;
	returnString += "\n CMD: ";
	returnString += combatManeuverDefense;
	returnString += "\n \n SAVES:";
	returnString += "\n Fortitude Save: ";
	returnString += fortitudeSave;
	returnString += "\n Reflex Save: ";
	returnString += reflexSave;
	returnString += "\n Will Save";
	returnString += willSave;
	returnString += "Class abilities: ";
	for (int i = 0; i < 11; i++) {
		returnString += classes[i].getSpecial();
		returnString += "\n ";
	}

	return returnString;


}
