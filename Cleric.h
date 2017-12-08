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
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	int getSpellsPerDay(int spellLevel);
};

