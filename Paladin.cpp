#include "Paladin.h"



Paladin::Paladin()
{
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
