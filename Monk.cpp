#include "Monk.h"



Monk::Monk()
{
	level = 1;
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
	BAB = 1 * level;
	skillPointperLevel = 4;
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
	case 2:
		kiPool = 0;
		BAB = 1;
		fortSave = 3;
		willSave = 3;
		reflexSave = 3;
	case 3:
		kiPool = 0;
		BAB = 2;
		fortSave = 3;
		willSave = 3;
		reflexSave = 3;
	case 4:
		kiPool = 2;
		BAB = 3;
		fortSave = 4;
		willSave = 4;
		reflexSave = 4;
	case 5:
		kiPool = 2;
		BAB = 3;
		fortSave = 4;
		willSave = 4;
		reflexSave = 4;
	case 6:
		kiPool = 3;
		BAB = 4;
		fortSave = 5;
		willSave = 5;
		reflexSave = 5;
	case 7:
		kiPool = 3;
		BAB = 5;
		fortSave = 5;
		willSave = 5;
		reflexSave = 5;
	case 8:
		kiPool = 4;
		BAB = 6;
		fortSave = 6;
		willSave = 6;
		reflexSave = 6;
	case 9:
		kiPool = 4;
		BAB = 6;
		fortSave = 6;
		willSave = 6;
		reflexSave = 6;
	case 10:
		kiPool = 5;
		BAB = 7;
		fortSave = 7;
		willSave = 7;
		reflexSave = 7;
	case 11:
		kiPool = 5;
		BAB = 8;
		fortSave = 7;
		willSave = 7;
		reflexSave = 7;
	case 12:
		kiPool = 6;
		BAB = 9;
		fortSave = 8;
		willSave = 8;
		reflexSave = 8;
	case 13:
		kiPool = 6;
		BAB = 9;
		fortSave = 8;
		willSave = 8;
		reflexSave = 8;
	case 14:
		kiPool = 7;
		BAB = 10;
		fortSave = 9;
		willSave = 9;
		reflexSave = 9;
	case 15:
		kiPool = 7;
		BAB = 11;
		fortSave = 9;
		willSave = 9;
		reflexSave = 9;
	case 16:
		kiPool = 8;
		BAB = 12;
		fortSave = 10;
		willSave = 10;
		reflexSave = 10;
	case 17:
		kiPool = 8;
		BAB = 12;
		fortSave = 10;
		willSave = 10;
		reflexSave = 10;
	case 18:
		kiPool = 9;
		BAB = 13;
		fortSave = 11;
		willSave = 11;
		reflexSave = 11;
	case 19:
		kiPool = 9;
		BAB = 14;
		fortSave = 11;
		willSave = 11;
		reflexSave = 11;
	case 20:
		kiPool = 10;
		BAB = 15;
		fortSave = 12;
		willSave = 12;
		reflexSave = 12;
}
