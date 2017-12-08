#pragma once
#include "Class.h"
class Ranger :
	public Class
{
private:
	int spellsPerDay[4];
	int favoredEnemy;
public:
	Ranger();

	~Ranger();
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

