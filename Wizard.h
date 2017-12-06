#pragma once
#include "Class.h"
#include "Spell.h"
#include <vector>
class Wizard :
	public Class
{

private:
	std::vector<Spell> spellList;
	int spellsPerDay[9];
public:
	Wizard();
	~Wizard();
	void onLevelUp();
};

