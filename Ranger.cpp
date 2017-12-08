#include "Ranger.h"



Ranger::Ranger()
{
	level = 1;
	skillClassArray[3] = 3;
	skillClassArray[9] = 3;
	skillClassArray[10] = 3;
	skillClassArray[11] = 3;
	skillClassArray[12] = 3;
	skillClassArray[14] = 3;
	skillClassArray[17] = 3;
	skillClassArray[18] = 3;
	skillClassArray[19] = 3;
	skillClassArray[20] = 3;
	knowledgeClassArray[1] = 3;
	knowledgeClassArray[3] = 3;
	knowledgeClassArray[6] = 3;
	
	BAB = 1 * level;
	skillPointperLevel = 6
}


Ranger::~Ranger()
{
	switch (level) {
	case 1:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 1;
		fortSave = 2;
		reflexSave = 2;
		willSave = 0;
		break;
	case 2:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 2;
		fortSave = 3;
		reflexSave = 3;
		willSave = 0;
		break;
	case 3:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 3;
		fortSave = 3;
		reflexSave = 3;
		willSave = 1;
		break;
	case 4:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 4;
		fortSave = 4;
		reflexSave = 4;
		willSave = 1;
	case 5:
		spellsPerDay[0] = 0;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 5;
		fortSave = 4;
		reflexSave = 4;
		willSave = 1;
	case 6:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 6;
		fortSave = 5;
		reflexSave = 5;
		willSave = 2;
	case 7:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 0;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 7;
		fortSave = 5;
		reflexSave = 5;
		willSave - 2;
	case 8:
		spellsPerDay[0] = 1;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 8;
		fortSave = 6;
		reflexSave = 6;
		willSave = 2;
	case 9:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 9;
		fortSave = 6;
		reflexSave = 6;
		willSave = 3;
	case 10:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 0;
		spellsPerDay[3] = 0;
		BAB = 10;
		fortSave = 7;
		reflexSave = 7;
		willSave = 3;
	case 11:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 1;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 11;
		fortSave = 7;
		reflexSave = 7;
		willSave = 3;
	case 12:
		spellsPerDay[0] = 2;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 12;
		fortSave = 8;
		reflexSave = 8;
		willSave = 8;
	case 13:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 0;
		BAB = 13;
		fortSave = 8;
		reflexSave = 8;
		willSave = 8;
	case 14:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 1;
		spellsPerDay[3] = 1;
		BAB = 14;
		fortSave = 9;
		reflexSave = 9;
		willSave = 4;
	case 15:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 2;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 15;
		fortSave = 9;
		reflexSave = 9;
		willSave = 5;
	case 16:
		spellsPerDay[0] = 3;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 16;
		fortSave = 10;
		reflexSave = 10;
		willSave = 5;
	case 17:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 2;
		spellsPerDay[3] = 1;
		BAB = 17;
		fortSave = 10;
		reflexSave = 10;
		willSave = 5;
	case 18:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 2;
		BAB = 18;
		fortSave = 11;
		reflexSave = 11;
		willSave = 6;
	case 19:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 3;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 3;
		BAB = 19;
		fortSave = 11;
		reflexSave = 11;
		willSave = 6;
	case 20:
		spellsPerDay[0] = 4;
		spellsPerDay[1] = 4;
		spellsPerDay[2] = 3;
		spellsPerDay[3] = 3;
		BAB = 20;
		fortSave = 12;
		reflexSave = 12;
		willSave = 6;
	}
}
