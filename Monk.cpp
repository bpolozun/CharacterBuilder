#include "Monk.h"



Monk::Monk()
{
	restriction = 3;
	level = 0;
	/*
	skillClassArray[0] = 3;
	skillClassArray[3] = 3;
	skillClassArray[7] = 3;
	skillClassArray[11] = 3;
	skillClassArray[12] = 3;
	skillClassArray[13] = 3;
	skillClassArray[14] = 3;
	skillClassArray[15] = 3;
	skillClassArray[18] = 3;
	skillClassArray[20] = 3;
	knowledgeClassArray[4] = 3;
	knowledgeClassArray[9] = 3;
	*/
	BAB = 1 * level;
	skillPointperLevel = 4;
	hitPoints = 0;
	willSave = 0;
	reflexSave = 0;
	fortSave = 0;
}


Monk::~Monk()
{
}

void Monk::onLevelUp()
{
	switch (level) {
	case 1:
		kiPool = 0;
		BAB = 0;
		fortSave = 2;
		willSave = 2;
		reflexSave = 2;
		hitPoints = 4 * level;
		break;
	case 2:
		kiPool = 0;
		BAB = 1;
		fortSave = 3;
		willSave = 3;
		reflexSave = 3;
		hitPoints = 4 * level;
		break;
	case 3:
		kiPool = 0;
		BAB = 2;
		fortSave = 3;
		willSave = 3;
		reflexSave = 3;
		hitPoints = 4 * level;
		break;
	case 4:
		kiPool = 2;
		BAB = 3;
		fortSave = 4;
		willSave = 4;
		reflexSave = 4;
		hitPoints = 4 * level;
		break;
	case 5:
		kiPool = 2;
		BAB = 3;
		fortSave = 4;
		willSave = 4;
		reflexSave = 4;
		hitPoints = 4 * level;
		break;
	case 6:
		kiPool = 3;
		BAB = 4;
		fortSave = 5;
		willSave = 5;
		reflexSave = 5;
		hitPoints = 4 * level;
		break;
	case 7:
		kiPool = 3;
		BAB = 5;
		fortSave = 5;
		willSave = 5;
		reflexSave = 5;
		hitPoints = 4 * level;
		break;
	case 8:
		kiPool = 4;
		BAB = 6;
		fortSave = 6;
		willSave = 6;
		reflexSave = 6;
		hitPoints = 4 * level;
		break;
	case 9:
		kiPool = 4;
		BAB = 6;
		fortSave = 6;
		willSave = 6;
		reflexSave = 6;
		hitPoints = 4 * level;
		break;
	case 10:
		kiPool = 5;
		BAB = 7;
		fortSave = 7;
		willSave = 7;
		reflexSave = 7;
		hitPoints = 4 * level;
		break;
	case 11:
		kiPool = 5;
		BAB = 8;
		fortSave = 7;
		willSave = 7;
		reflexSave = 7;
		hitPoints = 4 * level;
		break;
	case 12:
		kiPool = 6;
		BAB = 9;
		fortSave = 8;
		willSave = 8;
		reflexSave = 8;
		hitPoints = 4 * level;
		break;
	case 13:
		kiPool = 6;
		BAB = 9;
		fortSave = 8;
		willSave = 8;
		reflexSave = 8;
		hitPoints = 4 * level;
		break;
	case 14:
		kiPool = 7;
		BAB = 10;
		fortSave = 9;
		willSave = 9;
		reflexSave = 9;
		hitPoints = 4 * level;
		break;
	case 15:
		kiPool = 7;
		BAB = 11;
		fortSave = 9;
		willSave = 9;
		reflexSave = 9;
		hitPoints = 4 * level;
		break;
	case 16:
		kiPool = 8;
		BAB = 12;
		fortSave = 10;
		willSave = 10;
		reflexSave = 10;
		hitPoints = 4 * level;
		break;
	case 17:
		kiPool = 8;
		BAB = 12;
		fortSave = 10;
		willSave = 10;
		reflexSave = 10;
		hitPoints = 4 * level;
		break;
	case 18:
		kiPool = 9;
		BAB = 13;
		fortSave = 11;
		willSave = 11;
		reflexSave = 11;
		hitPoints = 4 * level;
		break;
	case 19:
		kiPool = 9;
		BAB = 14;
		fortSave = 11;
		willSave = 11;
		reflexSave = 11;
		hitPoints = 4 * level;
		break;
	case 20:
		kiPool = 10;
		BAB = 15;
		fortSave = 12;
		willSave = 12;
		reflexSave = 12;
		hitPoints = 4 * level;
		break;
	}
}

void Monk::setLevel(int newLevel)
{

	level = newLevel;
	onLevelUp();
}


int Monk::getLevel()
{
	return level;
}

int Monk::getBAB()
{
	return BAB;
}

int Monk::getFortSave()
{
	return fortSave;
}

int Monk::getWillSave()
{
	return willSave;
}

int Monk::getReflexSave()
{
	return reflexSave;
}

std::string Monk::getSpecial()
{
	std::string returnString = " \n \n A monk can use their ki pool for a variety of different feats. You have ";
	returnString += std::to_string(kiPool);
	returnString += " points in your pool. Consult your player's handbook for more information.";
	return returnString;
}