#pragma once
#include "Class.h"
class Barbarian :
	public Class
{
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
};

