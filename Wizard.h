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
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	int getSpellsPerDay(int spellLevel);
	std::vector<Spell> spellList();
};

