#pragma once
#include "Class.h"
class Fighter :
	public Class
{
public:
	Fighter();
	~Fighter();
	void onLevelUp();
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
};

