#include "Bard.h"



Bard::Bard()
{
	level = 0;
	/*
	skillClassArray[0] = 3;
	skillClassArray[1] = 3;
	skillClassArray[2] = 3;
	skillClassArray[3] = 3;
	skillClassArray[4] = 3;
	skillClassArray[6] = 3;
	skillClassArray[7] = 3;
	skillClassArray[11] = 3;
	skillClassArray[12] = 3;
	skillClassArray[13] = 3;
	skillClassArray[15] = 3;
	skillClassArray[16] = 3;
	skillClassArray[17] = 3;
	skillClassArray[18] = 3;
	skillClassArray[21] = 3;

	for (int i = 0; i < 10; i++) {
		knowledgeClassArray[i] = 3;
	}
	*/
	spellsPerDay[0] = 3;
	spellsPerDay[1] = 1;
	spellsPerDay[2] = 0;
	spellsPerDay[3] = 0;
	spellsPerDay[4] = 0;
	spellsPerDay[5] = 0;
	BAB = .75 * level;
	skillPointperLevel = 6;
	hitPoints = 0;
	willSave = 0;
	reflexSave = 0;
	fortSave = 0;
}


Bard::~Bard()
{
}

void Bard::onLevelUp()
{
	switch (level) {
	case 1:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 0;
		fortSave = 0;
		reflexSave = 2;
		willSave = 2;
		hitPoints = 4 * level;
		break;
	case 2:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 1;
		fortSave = 0;
		reflexSave = 3;
		willSave = 3;
		hitPoints = 4 * level;
		break;
	case 3:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 2;
		fortSave = 1;
		reflexSave = 3;
		willSave = 3;
		hitPoints = 4 * level;
		break;
	case 4:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 3;
		fortSave = 1;
		reflexSave = 4;
		willSave = 4;
		hitPoints = 4 * level;
		break;
	case 5:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 3;
		fortSave = 1;
		reflexSave = 4;
		willSave = 4;
		hitPoints = 4 * level;
		break;
	case 6:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 4;
		fortSave = 2;
		willSave = 5;
		reflexSave = 5;
		hitPoints = 4 * level;
		break;
	case 7:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 5;
		fortSave = 2;
		reflexSave = 5;
		willSave = 5;
		hitPoints = 4 * level;
		break;
	case 8:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 6;
		fortSave = 2;
		reflexSave = 5;
		willSave = 5;
		hitPoints = 4 * level;
		break;
	case 9:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 6;
		fortSave = 3;
		reflexSave = 6;
		willSave = 6;
		hitPoints = 4 * level;
		break;
	case 10:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 1;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 7;
		fortSave = 3;
		reflexSave = 7;
		willSave = 7;
		hitPoints = 4 * level;
		break;
	case 11:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		BAB = 8;
		fortSave = 3;
		willSave = 7;
		reflexSave = 7;
		hitPoints = 4 * level;
		break;
	case 12:		
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 1;
		spellsPerDay[5] = 0;
		BAB = 9;
		fortSave = 4;
		reflexSave = 8;
		willSave = 8;
		hitPoints = 4 * level;
		break;
	case 13:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 1;
		spellsPerDay[5] = 0;
		BAB = 9;
		fortSave = 4;
		reflexSave = 8;
		willSave = 8;
		hitPoints = 4 * level;
		break;
	case 14:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 2;
		spellsPerDay[5] = 0;
		BAB = 10;
		fortSave = 4;
		reflexSave = 9;
		willSave = 9;
		hitPoints = 4 * level;
		break;
	case 15:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 0;
		BAB = 11;
		fortSave = 5;
		reflexSave = 9;
		willSave = 9;
		hitPoints = 4 * level;
		break;
	case 16:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 1;
		BAB = 12;
		fortSave = 5;
		reflexSave = 10;
		willSave = 10;
		hitPoints = 4 * level;
		break;
	case 17:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 2;
		BAB = 12;
		fortSave = 5;
		reflexSave = 10;
		willSave = 10;
		hitPoints = 4 * level;
		break;
	case 18:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 3;
		BAB = 13;
		fortSave = 6;
		reflexSave = 11;
		willSave = 11;
		hitPoints = 4 * level;
		break;
	case 19:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 4;
		BAB = 14;
		fortSave = 6;
		reflexSave = 11;
		willSave = 11;
		hitPoints = 4 * level;
		break;
	case 20:
		spellsPerDay[0] = 5;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		BAB = 15;
		fortSave = 6;
		reflexSave = 12;
		willSave = 12;
		hitPoints = 4 * level;
		break;
	}
}

void Bard::setLevel(int newLevel)
{
	level = newLevel;
	onLevelUp();
}

int Bard::getLevel()
{
	return level;
}

int Bard::getBAB()
{
	return BAB;
}

int Bard::getFortSave()
{
	return fortSave;
}

int Bard::getWillSave()
{
	return willSave;
}

int Bard::getReflexSave()
{
	return reflexSave;
}

int Bard::getSpellsPerDay(int spellLevel)
{
	return spellsPerDay[spellLevel];
}

std::string Bard::getSpecial()
{
	std::string returnString = "\n \n A bard can perform a number of useful songs. Please consult your Player's Handbook for more information.";
	returnString += "\n Spells per day: ";
	for (int i = 0; i < 6; i++) {
		returnString += "\n Level ";
		returnString += std::to_string(i + 1);
		returnString += " spells per day: ";
		returnString += std::to_string(spellsPerDay[i]);
	}
	return returnString;
}
