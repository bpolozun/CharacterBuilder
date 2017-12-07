#include "Barbarian.h"



Barbarian::Barbarian()
{
	level = 1;
	skillClassArray[0] = 3;
	skillClassArray[3] = 3;
	skillClassArray[9] = 3;
	skillClassArray[11] = 3;
	skillClassArray[12] = 3;
	skillClassArray[14] = 3;
	skillClassArray[19] = 3;
	skillClassArray[20] = 3;
	knowledgeClassArray[6] = 3;
	BAB = 1 * level;
	skillPointperLevel = 4;
}


Barbarian::~Barbarian()
{
}

void Barbarian::onLevelUp()
{
	switch (level) {
	case 1:
		BAB = 1;
		willSave = 0;
		fortSave = 2;
		reflexSave = 0;
	case 2:
		BAB = 2;
		willSave = 0;
		fortSave = 3;
		reflexSave = 0;
	case 3:
		BAB = 3;
		willSave = 1;
		fortSave = 3;
		reflexSave = 1;
	case 4:
		BAB = 4;
		willSave = 1;
		fortSave = 4;
		reflexSave = 1;
	case 5:
		BAB = 5;
		willSave = 1;
		fortSave = 4;
		reflexSave = 1;
	case 6:
		BAB = 6;
		willSave = 2;
		fortSave = 5;
		reflexSave = 2;
	case 7:
		BAB = 7;
		willSave = 2;
		fortSave = 5;
		reflexSave = 2;
	case 8:
		BAB = 8;
		willSave = 2;
		fortSave = 6;
		reflexSave = 2;
	case 9:
		BAB = 9;
		willSave = 3;
		fortSave = 6;
		reflexSave = 3;
	case 10:
		BAB = 10;
		willSave = 3;
		fortSave = 7;
		reflexSave = 3;
	case 11:
		BAB = 11;
		willSave = 4;
		fortSave = 8;
		reflexSave = 4;
	case 12:
		BAB = 12;
		BAB = 11;
		willSave = 4;
		fortSave = 8;
		reflexSave = 4;
	case 13:
		BAB = 13;
		willSave = 4;
		fortSave = 8;
		reflexSave = 4;
	case 14:
		BAB = 14;
		willSave = 4;
		fortSave = 9;
		reflexSave = 4;
	case 15:
		BAB = 15;
		willSave = 5;
		fortSave = 9;
		reflexSave = 5;
	case 16:
		BAB = 16;
		willSave = 5;
		fortSave = 10;
		reflexSave = 5;
	case 17:
		BAB = 17;
		willSave = 5;
		fortSave = 10;
		reflexSave = 5;
	case 18:
		BAB = 18;
		willSave = 6;
		fortSave = 11;
		reflexSave = 6;
	case 19:
		BAB = 19;
		willSave = 6;
		fortSave = 11;
		reflexSave = 6;
	case 20:
		BAB = 20;
		willSave = 6;
		fortSave = 12;
		reflexSave = 6;
}
