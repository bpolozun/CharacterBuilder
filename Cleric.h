#pragma once
#include "Class.h"
class Cleric :
	public Class
{
private:
	int spellsPerDay[9];
	int channelEnergy;
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
	std::string getSpecial();
};

