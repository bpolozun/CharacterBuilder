#pragma once
#include "Class.h"
#include "Spell.h"
class Sorcerer :
	public Class
{
	int spellsPerDay[9];
	Spell spellsKnown[54];
public:
	Sorcerer();
	~Sorcerer();
	void onLevelUp();
};

