#pragma once
#include "Class.h"
class Paladin :
	public Class
{
private:
	int spellsPerDay[6];
	int smiteEvil;
	int layOnHands;
public:
	Paladin();
	~Paladin();
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

