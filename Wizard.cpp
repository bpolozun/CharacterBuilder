#include "Wizard.h"



Wizard::Wizard()
{
	skillClassArray[1] = 3;
	skillClassArray[8] = 3;
	skillClassArray[17] = 3;

	for (int i = 0; i < 10; i++) {
		knowledgeClassArray[i] = 3;
	}

	BAB = .5 * level;
}


Wizard::~Wizard()
{
}
