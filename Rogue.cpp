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
}
