#pragma once
#include "Class.h"
#include "Spell.h"
class Ranger :
	public Class
{
private:
	int spellsPerDay[4];
public:
	Ranger();

	~Ranger();
	void onLevelUp();
};

