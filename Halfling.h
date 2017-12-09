#pragma once
#include "Race.h"
/*
Halfling class, serves as a template to apply attributes and generate correct random values in Player.H
*/
class Halfling :
	public Race
{
public:
	/*
	Constructor
	*/
	Halfling();
	/*
	Destructor
	*/
	~Halfling();
};

