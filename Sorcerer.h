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
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	int getSpellsPerDay(int spellLevel);
	std::string getSpecial();
};

