#pragma once
#include "Race.h"
/*
Elf class, serves as a template to apply attributes and generate correct random values in Player.H
*/
class Elf :
	public Race
{
public:
	/*
	Constructor
	*/
	Elf();
	/*
	Destructor
	*/
	~Elf();
};

