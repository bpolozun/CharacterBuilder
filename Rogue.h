#pragma once
#include "Class.h"
class Rogue :
	public Class
{
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
};

