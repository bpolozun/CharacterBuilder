#include "Cleric.h"



Cleric::Cleric()
{
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
}


Cleric::~Cleric()
{
	BAB = .75 * level;
}
