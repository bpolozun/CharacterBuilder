#pragma once
#include "Class.h"
#include "Spell.h"
#include <vector>
class Cleric :
	public Class
{
private:
	int spellsPerDay[9];
public:
	Cleric();
	~Cleric();
	void onLevelUp();
};

