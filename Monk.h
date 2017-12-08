#pragma once
#include "Class.h"
class Monk :
	public Class
{
private:
	int kiPool;
public:
	Monk();
	~Monk();
	void onLevelUp();
	void setLevel(int newLevel);
	int getLevel();
	int getBAB();
	int getFortSave();
	int getWillSave();
	int getReflexSave();
	std::string getSpecial();
};

