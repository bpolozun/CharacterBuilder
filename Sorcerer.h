#pragma once
#include "Class.h"
/*
*Sorcerer class. Serves as a template as part of the greater class set.
*
*/
class Sorcerer :
	public Class
{
	int spellsPerDay[9];//Array storing the number of spells that can be cast per day.
public:
	/*
	Constructor method. Sets the various class skills and special abilities of the class
	*/
	Sorcerer();
	/*
	Destructor method.
	*/
	~Sorcerer();
	/*
	Method used to synchronize the attributes of the class after a change in level.
	*/
	void onLevelUp();
	/*
	Method used to let the player set the level.

	@param newLevel Integer, the level the level will be set to.
	*/
	void setLevel(int newLevel) override;
	/*
	Fetch method for level.

	@return The value of the level.
	*/
	int getLevel() override;
	/*
	Fetch method for BAB

	@return The BAB provided by the class to the player.
	*/
	int getBAB();
	/*
	Fetch method for fortSave

	@return The value provided by the class to the player's overall fort save.
	*/
	int getFortSave();
	/*
	Fetch method for willSave

	@return The value provided by the class to the player's overall will save.
	*/
	int getWillSave();
	/*
	Fetch method for reflexSave

	@return The value provided by the class to the player's overall reflex save.
	*/
	int getReflexSave();
	/*
	Fetch method for a given amount of spells per day.

	@param the level of spells to be queried
	@return the number of times that a given level of spells can be cast.
	*/
	int getSpellsPerDay(int spellLevel);
	/*
	Fetch method for any special abilities of the class.

	@return A string that contains the special abilities or spellcasting abilities of the class.
	*/
	std::string getSpecial() override;
};

