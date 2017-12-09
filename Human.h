#pragma once
#include "Race.h"
/*
Human class, serves as a template to apply attributes and generate correct random values in Player.H
*/
class Human :
	public Race
{
public:
	/*
	Constructor
	*/
	Human();
	/*
	Destructor
	*/
	~Human();
};

