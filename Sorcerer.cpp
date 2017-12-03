#include "Sorcerer.h"



Sorcerer::Sorcerer()
{
	skillClassArray[1] = 3;
	skillClassArray[2] = 3;
	skillClassArray[8] = 3;
	skillClassArray[11] = 3;
	skillClassArray[17] = 3;
	skillClassArray[21] = 3;
	knowledgeClassArray[0] = 3;

	BAB = .5 * level;
	skillPointperLevel = 2;
}


Sorcerer::~Sorcerer()
{
}
