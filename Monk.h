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
};

