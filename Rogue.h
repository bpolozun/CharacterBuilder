#pragma once
#include "Class.h"
class Rogue :
	public Class
{
private:
	int sneakAttack;
public:
	Rogue();
	~Rogue();
	void onLevelUp();
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	std::string getSpecial();
};

