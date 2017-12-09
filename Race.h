#pragma once
/*
* Race.h

Superclass used for setting the various races.
*/
#include <string>

#ifndef RACE_H_
#define RACE_H_

class Race {
protected:
	std::string Name; //Self explanatory.
	int raceID; //Numeric ID of the race.
	int attributeMods[6]; //Attribute modifiers associated with race. Ordered same as attribute array in Player class.
public:
	/*
	Constructor for race. Functionally virtual.
	*/
	Race();
	/*
	Virtual destructor.
	*/
	virtual ~Race();
	/*
	Fetch method for the name of a race.

	@return The name of the race.
	*/
	std::string getName();
	/*
	Fetch method for the code of a race.

	@return The ID code of the race.
	*/
	int getRaceID();
	/*
	Fetch method for the attribute mods of a race.

	@param Index The location of the mod to be pulled.
	@return The mod at the specified index.
	*/
	int getAttributeMods(int index);
};
#endif /* RACE_H_ */
