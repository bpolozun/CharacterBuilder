#pragma once
/*
* Player Object. Stores and manages information about a Player for the purposes of the Pathfinder Roleplaying Game
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Class.h"
#include "Item.h"
#include "Race.h"
#include "Feat.h"
#include "Human.h"
#include "HalfElf.h"
#include "Dwarf.h"
#include "Halfling.h"
#include "HalfOrc.h"
#include "Gnome.h"
#include "Elf.h"
#include "Barbarian.h"
#include "Bard.h"
#include "Cleric.h"
#include "Druid.h"
#include "Fighter.h"
#include "Monk.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Rogue.h"
#include "Sorcerer.h"
#include "Wizard.h"
#include <iostream>
#include <vector>
#include <cstdlib>

class Player {

private:
	//Stores ability scores in order Str, Dex, Con, Int, Wis, Cha
	int attributeArray[6];
	//Stores modifiers to an attribute. Race, Age, etc.
	int attributeModArray[6];

	//Races are user defined.
	Race userRace;
	//Dynamically sized array of items.
	std::vector<Item> itemArray;

	/*Classes are in the following order:
	0. Barbarian
	1. Bard.
	2. Cleric
	3. Druid
	4. Fighter
	5. Monk
	6. Paladin
	7. Ranger
	8. Rogue
	9. Sorcerer
	10. Wizard
	*/
	
	Class * classes[11];
	//Player's hitpoints total.
	int hitPoints;
	/*
	Stores the players skills in an array in the following order:
	0: Acrobatics
	1: Appraise.
	2: Bluff
	3. Climb
	4: Diplomacy
	5: Disable Device
	6: Disguise
	7: Escape ARtist
	8: Fly
	9: Handle Animal
	10: Heal
	11: Intimidate
	12: Perception
	13: Perform
	14: Ride
	15: Sense Motive
	16: Sleight of Hand
	17: Spellcraft
	18: Stealth
	19: Survival
	2: Swim
	21: Use Magic Device
	*/
	int skillsArray[21]; //Unused.
	int skillModArray[21]; //Unused.

	int ageCategory; //Player's age category. Can be young, middle aged, old, or venerable
	int ageAttributeMods[6]; //Modifiers to the player's attributes caused by age category.
	int attributeBonuses[6]; //Bonuses provided by the player's attributes (EG 13 str = +1, 8 str = -2)
	int knowledgeArray[10]; //Unused.
	int knowledgeModArray[10]; //Unused.
	int alignmentGoodEvil; //Player's alignment. Moral axis
	int alignmentLawfulChaotic; //Player's alignment. Lawful axis.
	std::string playerName; //Name of the player.

	int baseAttackBonus; //BAB of all combined classes.
	int combatManeuverDefense; //CMD of all combined classes.
	int combatManeuverBonus; //CMB of all combined classes.
	int age, weight, height; //Fluff values, automatically generated.
	bool gender; //Sex of the player. Binary value for simplicity.
	int overallLevel; //Total combined level of the player.
	int totalSkillPoints; //Skillpoints that the player may allocate.
	int totalFeats; //Feats that the player may take.
	int willSave; //Combined willsave of the player.
	int reflexSave; //Combined reflex save of the player.
	int fortitudeSave; //Combined fortitude save of the player.


public:
	/*
	Constructor
	*/
	Player();
	/*
	Destructor.
	*/
	virtual ~Player();
	/*
	Set method for the name of Player

	@param newName The new name.
	*/
	void setName(std::string newName);
	/*
	Fetch method for the player's name.

	@return The name of the player.
	*/
	std::string getName();
	/*
	Set method for the player's attributes. Must be done in gestalt.

	@param str The new strength of the player.
	@param dex The new Dexterity of the player.
	@param con The new Constitution of the player.
	@param inte The new Intelligence of the player.
	@param wis The new Wisdom of the player.
	@param cha The new Charisma of the player.
	*/
	void setAttributes(int str, int dex, int con, int inte, int wis, int cha);
	/*
	Fetch method for ability scores.

	@param index The index of the score to be queried.
	@return The score of the chosen ability.
	*/
	int getAttribute(int index);
	/*
	Set method for the gender of the player

	@param newGender New gender. False for male, True for female.
	*/
	void setGender(bool newGender);
	/*
	Fetch method for gender.

	@return The gender of the player.
	*/
	bool getGender();
	/*
	Fetch method for BAB.

	@return The player's BAB.
	*/
	int getBAB();
	/*
	Fetch method for overall Level

	@return The player's total level.
	*/
	int getLevel();
	/*
	Fetch method for skillpoints.

	@return The player's overall skillpoints.
	*/
	int getTotalSkillPoints();
	/*
	Fetch method for feats.

	@return The player's feat total.
	*/
	int getTotalFeats();
	/*
	Fetch method for age.

	@return The player's age.
	*/
	int getAge();
	/*
	Set method for age.

	@param The player's age category.
	*/
	void setAge(int newAge);
	/*
	Fetch method for weight.

	@return The player's weight.
	*/
	int getWeight();
	/*
	Fetch method for height.

	@return The player's height.
	*/
	int getHeight();
	/*
	Set method for the value of a player's class.
	
	@param classLocation The index of the class to be selected.
	@param newLevel the desired level to be set.
	*/
	void setClassLevel(int classLocation, int newLevel);

	/*
	Set method for the player's race. Generates a new race based off the provided code.

	@param race The code for the new desired Race.
	*/
	void setRace(int race);
	/*
	Fetch method for the value of a player's class.

	@return integer value of the player's race.
	*/
	int getRace();
	/*
	Set method for lawful alignment.

	@param The player's new alignment Chaotic(0-2)Lawful
	*/
	void setAlignmentLawfulChaotic(int newAlignment);

	int getAlightmentLawfulChaotic();
	/*
	Set method for moral alignment.

	@param The player's new moral alignment Good(0-2)Evil
	*/
	int getAlignmentGoodEvil();
	void setAlignmentGoodEvil(int newAlignment);

	/*
	Unused method for managing inventory.
	*/
	void addItem(Item item);
	/*
	Unused method for managing inventory.
	*/
	std::vector<Item> getInventory();

	/*
	Unused method for managing skills.
	*/
	void setSkillLevel(int skillLocation, int newValue);	
	/*
	Unused method for managing skills.
	*/
	int getSkillLevel(int skillLocation);
	/*
	Synchronization method used to ensure all variables are updated following a change in class level to their appropriate values.
	*/
	void onClassUpdate();
	/*
	Synchronization method used to ensure all variables are updated following a change in race or age to their appropriate values.
	*/
	void updateAttributeMods();
	/*
	Method for exporting the entire contents of the player file as a printable string.

	@return A formatted string containing a full report of the Player object's contents.
	*/
	std::string exportAsString();


};

#endif /* PLAYER_H_ */
