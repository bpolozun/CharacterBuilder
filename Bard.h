#pragma once
#include "Class.h"
class Bard :
	public Class
{
private:
	int spellsPerDay[6];
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
	std::string getSpecial();
};

