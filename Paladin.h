#pragma once
#include "Class.h"
class Paladin :
	public Class
{
private:
	int spellsPerDay[6];
public:
	Paladin();
	~Paladin();
	void onLevelUp();
};

