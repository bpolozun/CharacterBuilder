#pragma once
#include "Class.h"

class Barbarian :
	public Class
{
private:
	int rageUses;
public:

	Barbarian();
	~Barbarian();
	void onLevelUp();
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	std::string getSpecial();
};

