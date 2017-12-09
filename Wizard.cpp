#include "Wizard.h"



Wizard::Wizard()
{
	level = 0;
	/*
	skillClassArray[1] = 3;
	skillClassArray[8] = 3;
	skillClassArray[17] = 3;

	for (int i = 0; i < 10; i++) {
		knowledgeClassArray[i] = 3;
	}
	*/
	skillPointperLevel = 2;
	spellsPerDay[0] = 3;
	spellsPerDay[1] = 1;
	spellsPerDay[2] = 0;
	spellsPerDay[3] = 0;
	spellsPerDay[4] = 0;
	spellsPerDay[5] = 0;
	spellsPerDay[6] = 0;
	spellsPerDay[7] = 0;
	spellsPerDay[8] = 0;
	spellsPerDay[9] = 0;
	hitPoints = 0;
	willSave = 0;
	reflexSave = 0;
	fortSave = 0;
}


Wizard::~Wizard()
{
}

void Wizard::onLevelUp()
{
	switch (level) {
	case 1:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 0;
		willSave = 3;
		fortSave = 0;
		reflexSave = 0;
		hitPoints = 3 * level;
		break;
	case 2:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 1;
		willSave = 3;
		fortSave = 0;
		reflexSave = 0;
		hitPoints = 3 * level;
		break;
	case 3:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 1;
		willSave = 3;
		fortSave = 1;
		reflexSave = 1;
		hitPoints = 3 * level;
		break;
	case 4:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 0;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 2;
		willSave = 4;
		fortSave = 1;
		reflexSave = 1;
		hitPoints = 3 * level;
		break;
	case 5:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 2;
		willSave = 4;
		fortSave = 1;
		reflexSave = 1;
		hitPoints = 3 * level;
		break;
	case 6:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 2;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 3;
		willSave = 5;
		fortSave = 2;
		reflexSave = 2;
		hitPoints = 3 * level;
		break;
	case 7:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 2;
		spellsPerDay[4] = 1;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 3;
		willSave = 5;
		fortSave = 2;
		reflexSave = 2;
		hitPoints = 3 * level;
		break;
	case 8:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 2;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 4;
		willSave = 6;
		fortSave = 2;
		reflexSave = 2;
		hitPoints = 3 * level;
		break;
	case 9:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 2;
		spellsPerDay[5] = 1;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 4;
		willSave = 6;
		fortSave = 3;
		reflexSave = 3;
		hitPoints = 3 * level;
		break;
	case 10:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 2;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 5;
		willSave = 7;
		fortSave = 2;
		reflexSave = 2;
		hitPoints = 3 * level;
		break;
	case 11:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 2;
		spellsPerDay[6] = 1;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 5;
		willSave = 7;
		fortSave = 2;
		reflexSave = 2;
		hitPoints = 3 * level;
		break;
	case 12:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 3;
		spellsPerDay[6] = 2;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 6;
		willSave = 8;
		fortSave = 4;
		reflexSave = 4;
		hitPoints = 3 * level;
		break;
	case 13:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 3;
		spellsPerDay[6] = 2;
		spellsPerDay[7] = 1;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 6;
		willSave = 8;
		fortSave = 4;
		reflexSave = 4;
		hitPoints = 3 * level;
		break;
	case 14:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 3;
		spellsPerDay[6] = 3;
		spellsPerDay[7] = 2;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 7;
		willSave = 9;
		fortSave = 4;
		reflexSave = 4;
		hitPoints = 3 * level;
		break;
	case 15:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 3;
		spellsPerDay[7] = 2;
		spellsPerDay[8] = 1;
		spellsPerDay[9] = 0;
		BAB = 7;
		willSave = 9;
		fortSave = 5;
		reflexSave = 5;
		hitPoints = 3 * level;
		break;
	case 16:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 3;
		spellsPerDay[7] = 3;
		spellsPerDay[8] = 2;
		spellsPerDay[9] = 0;
		BAB = 8;
		willSave = 10;
		fortSave = 5;
		reflexSave = 5;
		hitPoints = 3 * level;
		break;
	case 17:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 3;
		spellsPerDay[8] = 2;
		spellsPerDay[9] = 1;
		BAB = 8;
		willSave = 10;
		fortSave = 5;
		reflexSave = 5;
		hitPoints = 3 * level;
		break;
	case 18:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 3;
		spellsPerDay[8] = 3;
		spellsPerDay[9] = 2;
		BAB = 9;
		willSave = 11;
		fortSave = 6;
		reflexSave = 6;
		hitPoints = 3 * level;
		break;
	case 19:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 4;
		spellsPerDay[8] = 3;
		spellsPerDay[9] = 3;
		BAB = 19;
		willSave = 11;
		fortSave = 6;
		reflexSave = 6;
		hitPoints = 3 * level;
		break;
	case 20:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 4;
		spellsPerDay[8] = 4;
		spellsPerDay[9] = 4;
		BAB = 10;
		willSave = 12;
		fortSave = 6;
		reflexSave = 6;
		hitPoints = 3 * level;
		break;
	}
}

void Wizard::setLevel(int newLevel)
{
	
		level = newLevel;
		onLevelUp();
}


int Wizard::getLevel()
{
	return level;
}

int Wizard::getBAB()
{
	return BAB;
}

int Wizard::getFortSave()
{
	return fortSave;
}

int Wizard::getWillSave()
{
	return willSave;
}

int Wizard::getReflexSave()
{
	return reflexSave;
}

int Wizard::getSpellsPerDay(int spellLevel)
{
	return spellsPerDay[spellLevel];
}

std::string Wizard::getSpecial()
{
	std::string returnString = " \n  \n Wizards do not have any special abilities outside of their spellcasting.";
	returnString += " \n Spells per day: ";
	for (int i = 0; i < 9; i++) {
		returnString += "\n Level ";
		returnString += std::to_string(i + 1);
		returnString += " spells per day: ";
		returnString += std::to_string(spellsPerDay[i]);
	}
	return returnString;
}
