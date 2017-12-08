#include "Druid.h"




Druid::Druid()
{
	restriction = 2;
	level = 1;
	skillClassArray[3] = 3;
	skillClassArray[8] = 3;
	skillClassArray[9] = 3;
	skillClassArray[10] = 3;
	skillClassArray[12] = 3;
	skillClassArray[14] = 3;
	skillClassArray[17] = 3;
	skillClassArray[19] = 3;
	skillClassArray[20] = 3;
	knowledgeClassArray[3] = 3;
	knowledgeClassArray[6] = 3;
	onLevelUp();
}


Druid::~Druid()
{
}

void Druid::onLevelUp()
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
		willSave = 2;
		fortSave = 2;
		reflexSave = 0;
		wildShape = 0;
		hitPoints = 4 * level;
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
		fortSave = 3;
		reflexSave = 0;
		wildShape = 0;
		hitPoints = 4 * level;
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
		BAB = 2;
		willSave = 3;
		fortSave = 3;
		reflexSave = 1;
		wildShape = 0;
		hitPoints = 4 * level;
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
		BAB = 3;
		willSave = 4;
		fortSave = 4;
		reflexSave = 1;
		wildShape = 1;
		hitPoints = 4 * level;
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
		BAB = 3;
		willSave = 5;
		fortSave = 5;
		reflexSave = 2;
		wildShape = 1;
		hitPoints = 4 * level;
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
		BAB = 4;
		willSave = 5;
		fortSave = 5;
		reflexSave = 2;
		wildShape = 2;
		hitPoints = 4 * level;
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
		BAB = 5;
		willSave = 5;
		fortSave = 5;
		reflexSave = 2;
		wildShape = 2;
		hitPoints = 4 * level;
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
		wildShape = 3;
		BAB = 6;
		willSave = 6;
		fortSave = 6;
		reflexSave = 2;
		hitPoints = 4 * level;
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
		wildShape = 3;
		BAB = 6;
		willSave = 6;
		fortSave = 6;
		reflexSave = 3;
		hitPoints = 4 * level;
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
		BAB = 7;
		willSave = 7;
		fortSave = 7;
		reflexSave = 3;
		wildShape = 4;
		hitPoints = 4 * level;
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
		BAB = 8;
		willSave = 7;
		fortSave = 7;
		reflexSave = 3;
		wildShape = 4;
		hitPoints = 4 * level;
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
		BAB = 9;
		willSave = 8;
		fortSave = 8;
		reflexSave = 4;
		wildShape = 5;
		hitPoints = 4 * level;
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
		BAB = 9;
		willSave = 8;
		fortSave = 8;
		reflexSave = 4;
		wildShape = 5;
		hitPoints = 4 * level;
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
		BAB = 10;
		willSave = 9;
		fortSave = 9;
		reflexSave = 4;
		wildShape = 6;
		hitPoints = 4 * level;
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
		BAB = 11;
		willSave = 9;
		fortSave = 9;
		reflexSave = 5;
		wildShape = 6;
		hitPoints = 4 * level;
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
		BAB = 12;
		willSave = 10;
		fortSave = 10;
		reflexSave = 5;
		wildShape = 7;
		hitPoints = 4 * level;
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
		BAB = 12;
		willSave = 10;
		fortSave = 10;
		reflexSave = 5;
		wildShape = 7;
		hitPoints = 4 * level;
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
		BAB = 13;
		willSave = 11;
		fortSave = 11;
		reflexSave = 6;
		wildShape = 8;
		hitPoints = 4 * level;
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
		BAB = 14;
		willSave = 11;
		fortSave = 11;
		reflexSave = 6;
		wildShape = 8;
		hitPoints = 4 * level;
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
		BAB = 15;
		willSave = 12;
		fortSave = 12;
		reflexSave = 6;
		wildShape = 100000;
		hitPoints = 4 * level;
		break;
	}
}

void Druid::setLevel(int newLevel)
{

	level = newLevel;
	onLevelUp();
}


int Druid::getLevel()
{
	return level;
}

int Druid::getBAB()
{
	return BAB;
}

int Druid::getFortSave()
{
	return fortSave;
}

int Druid::getWillSave()
{
	return willSave;
}

int Druid::getReflexSave()
{
	return reflexSave;
}

int Druid::getSpellsPerDay(int spellLevel)
{
	return spellsPerDay[spellLevel];
}

std::string Druid::getSpecial()
{
	std::string returnString = "A druid, as an agent of nature, may take the form of the many creatures of nature, though the range of transformations achieveable may vary depending on their level. You may take these forms ";
	if (level < 20) {
		returnString += wildShape;
	}
	else {
		returnString += " an unlimited number of ";
	}
	returnString += " times per day. A druid also has a number of other useful abilities. Consult your player's handbook for more information.";
	return returnString
}