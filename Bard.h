#pragma once
#include "Class.h"
#include "Spell.h"
#include <vector>
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
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	int getSpellsPerDay(int spellLevel);
	void addSpell(Spell newSpell);
	std::vector<Spell> getSpellsKnown();
	std::string getSpecial();
};

