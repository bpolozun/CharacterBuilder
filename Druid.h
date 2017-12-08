#pragma once
#include "Class.h"
#include "Spell.h"
#include "vector"
class Druid :
	public Class
{
private:
	int spellsPerDay[9];
	int wildShape;
public:
	Druid();
	~Druid();
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

