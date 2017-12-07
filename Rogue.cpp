#include "Rogue.h"



Rogue::Rogue()
{
	level = 1;
	skillClassArray[0] = 3;
	skillClassArray[1] = 3;
	skillClassArray[2] = 3;
	skillClassArray[3] = 3;
	skillClassArray[4] = 3;
	skillClassArray[5] = 3;
	skillClassArray[6] = 3;
	skillClassArray[7] = 3;
	skillClassArray[11] = 3;
	skillClassArray[12] = 3;
	skillClassArray[13] = 3;
	skillClassArray[15] = 3;
	skillClassArray[16] = 3;
	skillClassArray[18] = 3;
	skillClassArray[20] = 3;
	skillClassArray[21] = 3;
	knowledgeClassArray[1] = 3;
	knowledgeClassArray[6] = 3;
	BAB = 1 * level;
	skillPointperLevel = 8
}


Rogue::~Rogue()
{
	{
		switch (level) {
		case 1:
			BAB = 1;
			willSave = 0;
			fortSave = 0;
			reflexSave = 2;
		case 2:
			BAB = 2;
			willSave = 0;
			fortSave = 0;
			reflexSave = 3;
		case 3:
			BAB = 3;
			willSave = 1;
			fortSave = 1;
			reflexSave = 3;
		case 4:
			BAB = 4;
			willSave = 1;
			fortSave = 1;
			reflexSave = 4;
		case 5:
			BAB = 5;
			willSave = 1;
			fortSave = 1;
			reflexSave = 4;
		case 6:
			BAB = 6;
			willSave = 2;
			fortSave = 2;
			reflexSave = 5;
		case 7:
			BAB = 7;
			willSave = 2;
			fortSave = 2;
			reflexSave = 5;
		case 8:
			BAB = 8;
			willSave = 2;
			fortSave = 2;
			reflexSave = 6;
		case 9:
			BAB = 9;
			willSave = 3;
			fortSave = 3;
			reflexSave = 6;
		case 10:
			BAB = 10;
			willSave = 3;
			fortSave = 3;
			reflexSave = 8;
		case 11:
			BAB = 11;
			willSave = 4;
			fortSave = 4;
			reflexSave = 8;
		case 12:
			BAB = 12;
			BAB = 11;
			willSave = 4;
			fortSave = 4;
			reflexSave = 8;
		case 13:
			BAB = 13;
			willSave = 4;
			fortSave = 4;
			reflexSave = 8;
		case 14:
			BAB = 14;
			willSave = 4;
			fortSave = 4;
			reflexSave = 9;
		case 15:
			BAB = 15;
			willSave = 5;
			fortSave = 5;
			reflexSave = 9;
		case 16:
			BAB = 16;
			willSave = 5;
			fortSave = 5;
			reflexSave = 10;
		case 17:
			BAB = 17;
			willSave = 5;
			fortSave = 5;
			reflexSave = 10;
		case 18:
			BAB = 18;
			willSave = 6;
			fortSave = 6;
			reflexSave = 11;
		case 19:
			BAB = 19;
			willSave = 6;
			fortSave = 6;
			reflexSave = 11;
		case 20:
			BAB = 20;
			willSave = 6;
			fortSave = 6;
			reflexSave = 12;
		}
}
