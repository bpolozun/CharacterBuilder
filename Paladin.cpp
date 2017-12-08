#include "Paladin.h"



Paladin::Paladin()
{
	level = 1;
	skillClassArray[4] = 3;
	skillClassArray[9] = 3;
	skillClassArray[10] = 3;
	skillClassArray[14] = 3;
	skillClassArray[15] = 3;
	skillClassArray[17] = 3;
	knowledgeClassArray[7] = 3;
	knowledgeClassArray[9] = 3;
	BAB = 1 * level;
	skillPointperLevel = 2;

}


Paladin::~Paladin()
{
	
}

void Paladin::onLevelUp()
{
	switch (level) {
	case 1:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 1;
		fortSave = 2;
		reflexSave = 0;
		willSave = 2;
		break;
	case 2:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 2;
		fortSave = 3;
		reflexSave = 0;
		willSave = 3;
		break;
	case 3:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 3;
		fortSave = 3;
		reflexSave = 1;
		willSave = 3;
		break;
	case 4:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 4;
		fortSave = 4;
		reflexSave = 1;
		willSave = 4;
		break;
	case 5:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 5;
		fortSave = 4;
		reflexSave = 1;
		willSave = 4;
		break;
	case 6:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 6;
		fortSave = 5;
		reflexSave = 2;
		willSave = 5;
		break;
	case 7:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 7;
		fortSave = 5;
		reflexSave = 2;
		willSave - 5;
		break;
	case 8:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 8;
		fortSave = 6;
		reflexSave = 2;
		willSave = 6;
		break;
	case 9:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 9;
		fortSave = 6;
		reflexSave = 3;
		willSave = 6;
		break;
	case 10:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 10;
		fortSave = 7;
		reflexSave = 3;
		willSave = 7;
		break;
	case 11:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 11;
		fortSave = 7;
		reflexSave = 3;
		willSave = 7;
		break;
	case 12:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 12;
		fortSave = 8;
		reflexSave = 4;
		willSave = 8;
		break;
	case 13:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 13;
		fortSave = 8;
		reflexSave = 4;
		willSave = 8;
		break;
	case 14:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 1;
		BAB = 14;
		fortSave = 9;
		reflexSave = 4;
		willSave = 9;
		break;
	case 15:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 15;
		fortSave = 9;
		reflexSave = 5;
		willSave = 9;
		break;
	case 16:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 16;
		fortSave = 10;
		reflexSave = 5;
		willSave = 10;
		break;
	case 17:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 17;
		fortSave = 10;
		reflexSave = 5;
		willSave = 10;
		break;
	case 18:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 2;
		BAB = 18;
		fortSave = 11;
		reflexSave = 6;
		willSave = 11;
		break;
	case 19:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 3;
		BAB = 19;
		fortSave = 11;
		reflexSave = 6;
		willSave = 11;
		break;
	case 20:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 3;
		BAB = 20;
		fortSave = 12;
		reflexSave = 6;
		willSave = 12;
		break;
	}
}

void Paladin::setLevel(int newLevel)
{

	level = newLevel;
	onLevelUp();
}


int Paladin::getLevel()
{
	return level;
}

int Paladin::getBAB()
{
	return BAB;
}

int Paladin::getFortSave()
{
	return fortSave;
}

int Paladin::getWillSave()
{
	return willSave;
}

int Paladin::getReflexSave()
{
	return reflexSave;
}

int Paladin::getSpellsPerDay(int spellLevel)
{
	return spellsPerDay[spellLevel];
}
