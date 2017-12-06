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
