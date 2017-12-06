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
}
