#include "Cleric.h"
#include "Spell.h"



Cleric::Cleric()
{
	level = 1;
	skillClassArray[1] = 3;
	skillClassArray[4] = 3;
	skillClassArray[10] = 3;
	skillClassArray[15] = 3;
	skillClassArray[17] = 3;
	knowledgeClassArray[0] = 3;
	knowledgeClassArray[4] = 3;
	knowledgeClassArray[7] = 3;
	knowledgeClassArray[8] = 3;
	knowledgeClassArray[9] = 3;
	skillPointperLevel = 2;
	onLevelUp();
}


Cleric::~Cleric()
{

}

void Cleric::onLevelUp()
{
	switch (level) {
	case 1:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
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
		break;
	case 2:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
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
		break;
	case 3:
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
		willSave = 3;
		fortSave = 3;
		reflexSave = 1;
		break;
	case 4:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
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
		break;
	case 5:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 2;
		spellsPerDay[4] = 0;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 3;
		willSave = 4;
		fortSave = 1;
		reflexSave = 4;
		break;
	case 6:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
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
		break;
	case 7:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 3;
		spellsPerDay[4] = 2;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 5;
		willSave = 5;
		fortSave = 5;
		reflexSave = 2;
		break;
	case 8:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 4;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 0;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 6;
		willSave = 6;
		fortSave = 6;
		reflexSave = 2;
		break;
	case 9:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 3;
		spellsPerDay[5] = 2;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 6;
		willSave = 6;
		fortSave = 6;
		reflexSave = 3;
		break;
	case 10:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 3;
		spellsPerDay[6] = 0;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 7;
		willSave = 7;
		fortSave = 7;
		reflexSave = 3;
		break;
	case 11:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 4;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 3;
		spellsPerDay[6] = 2;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 8;
		willSave = 7;
		fortSave = 7;
		reflexSave = 3;
		break;
	case 12:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 4;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 3;
		spellsPerDay[7] = 0;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 9;
		willSave = 8;
		fortSave = 8;
		reflexSave = 4;
		break;
	case 13:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 3;
		spellsPerDay[7] = 2;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 9;
		willSave = 8;
		fortSave = 8;
		reflexSave = 4;
		break;
	case 14:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 4;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 3;
		spellsPerDay[8] = 0;
		spellsPerDay[9] = 0;
		BAB = 10;
		willSave = 9;
		fortSave = 9;
		reflexSave = 4;
		break;
	case 15:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 3;
		spellsPerDay[8] = 2;
		spellsPerDay[9] = 0;
		BAB = 11;
		willSave = 9;
		fortSave = 9;
		reflexSave = 5;
		break;
	case 16:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 4;
		spellsPerDay[7] = 4;
		spellsPerDay[8] = 3;
		spellsPerDay[9] = 0;
		BAB = 12;
		willSave = 10;
		fortSave = 10;
		reflexSave = 5;
		break;
	case 17:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 5;
		spellsPerDay[7] = 4;
		spellsPerDay[8] = 3;
		spellsPerDay[9] = 2;
		BAB = 12;
		willSave = 10;
		fortSave = 10;
		reflexSave = 5;
		break;
	case 18:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 5;
		spellsPerDay[7] = 4;
		spellsPerDay[8] = 4;
		spellsPerDay[9] = 3;
		BAB = 13;
		willSave = 11;
		fortSave = 11;
		reflexSave = 6;
		break;
	case 19:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 5;
		spellsPerDay[7] = 5;
		spellsPerDay[8] = 5;
		spellsPerDay[9] = 4;
		BAB = 14;
		willSave = 11;
		fortSave = 11;
		reflexSave = 6;
		break;
	case 20:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 5;
		spellsPerDay[2] = 5;
		spellsPerDay[3] = 5;
		spellsPerDay[4] = 5;
		spellsPerDay[5] = 5;
		spellsPerDay[6] = 5;
		spellsPerDay[7] = 5;
		spellsPerDay[8] = 5;
		spellsPerDay[9] = 5;
		BAB = 15;
		willSave = 12;
		fortSave = 12;
		reflexSave = 6;
		break;
	}
}

void Cleric::setLevel(int newLevel)
{
	level = newLevel;
	onLevelUp();
}


	int Cleric::getLevel()
	{
		return level;
	}

	int Cleric::getBAB()
	{
		return BAB;
	}

	int Cleric::getFortSave()
	{
		return fortSave;
	}

	int Cleric::getWillSave()
	{
		return willSave;
	}

	int Cleric::getReflexSave()
	{
		return reflexSave;
	}

	int Cleric::getSpellsPerDay(int spellLevel)
	{
		return spellsPerDay[spellLevel];
	}
