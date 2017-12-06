#pragma once
#include "Class.h"
#include "Spell.h"
class Bard :
	public Class
{
private:
	int spellsPerDay[6];
	Spell spellsKnown[30];
public:
	Bard();
	~Bard();
	void onLevelUp();
};

