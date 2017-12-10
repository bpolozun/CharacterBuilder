/*
* MAIN.cpp
*
*  Created on: Dec 01, 2017
*      Author: Vincent Popp
*/



// Standard Headers
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
// FLTK Headers
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Value_Slider.H>
#include <FL/fl_ask.H>
// Backend Headers
#include "Player.cpp"
#include "Class.h"
#include "Class.cpp"
#include "Item.h"
#include "Item.cpp"
#include "Race.h"
#include "Race.cpp"
#include "Feat.h"
#include "Human.h"
#include "Human.cpp"
#include "HalfElf.h"
#include "HalfElf.cpp"
#include "Dwarf.h"
#include "Dwarf.cpp"
#include "Halfling.h"
#include "Halfling.cpp"
#include "HalfOrc.h"
#include "HalfOrc.cpp"
#include "Gnome.h"
#include "Gnome.cpp"
#include "Elf.h"
#include "Elf.cpp"
#include "Barbarian.h"
#include "Barbarian.cpp"
#include "Bard.h"
#include "Bard.cpp"
#include "Cleric.h"
#include "Cleric.cpp"
#include "Druid.h"
#include "Druid.cpp"
#include "Fighter.h"
#include "Fighter.cpp"
#include "Monk.h"
#include "Monk.cpp"
#include "Paladin.h"
#include "Paladin.cpp"
#include "Ranger.h"
#include "Ranger.cpp"
#include "Rogue.h"
#include "Rogue.cpp"
#include "Sorcerer.h"
#include "Sorcerer.cpp"
#include "Wizard.h"
#include "Wizard.cpp"



using namespace std;



/* Global GUI Variables */

// Name
Fl_Group *sectionName = (Fl_Group *)0;
Fl_Box *decorationName = (Fl_Box *)0;
Fl_Input *singleName = (Fl_Input *)0;
// Age
Fl_Group *sectionAge = (Fl_Group *)0;
Fl_Box *decorationAge = (Fl_Box *)0;
Fl_Round_Button *roundYoung = (Fl_Round_Button *)0;
Fl_Round_Button *roundMiddleAge = (Fl_Round_Button *)0;
Fl_Round_Button *roundOld = (Fl_Round_Button *)0;
Fl_Round_Button *roundVenerable = (Fl_Round_Button *)0;
// Race
Fl_Group *sectionRace = (Fl_Group *)0;
Fl_Box *decorationRace = (Fl_Box *)0;
Fl_Round_Button *roundDwarf = (Fl_Round_Button *)0;
Fl_Round_Button *roundGnome = (Fl_Round_Button *)0;
Fl_Round_Button *roundElf = (Fl_Round_Button *)0;
Fl_Round_Button *roundHalfElf = (Fl_Round_Button *)0;
Fl_Round_Button *roundHalfOrc = (Fl_Round_Button *)0;
Fl_Round_Button *roundHalfling = (Fl_Round_Button *)0;
Fl_Round_Button *roundHuman = (Fl_Round_Button *)0;
// Gender
Fl_Group *sectionGender = (Fl_Group *)0;
Fl_Box *decorationGender = (Fl_Box *)0;
Fl_Round_Button *roundMale = (Fl_Round_Button *)0;
Fl_Round_Button *roundFemale = (Fl_Round_Button *)0;
// Alignment
Fl_Group *sectionAlignment = (Fl_Group *)0;
Fl_Box *decorationAlignment = (Fl_Box *)0;
Fl_Box *gridLawful = (Fl_Box *)0;
Fl_Box *gridNeutral0 = (Fl_Box *)0;
Fl_Box *gridChaotic = (Fl_Box *)0;
Fl_Box *gridGood = (Fl_Box *)0;
Fl_Box *gridNeutral1 = (Fl_Box *)0;
Fl_Box *gridEvil = (Fl_Box *)0;
Fl_Round_Button *optionLawfulGood = (Fl_Round_Button *)0;
Fl_Round_Button *optionNeutralGood = (Fl_Round_Button *)0;
Fl_Round_Button *optionChaoticGood = (Fl_Round_Button *)0;
Fl_Round_Button *optionLawfulNeutral = (Fl_Round_Button *)0;
Fl_Round_Button *optionNeutral = (Fl_Round_Button *)0;
Fl_Round_Button *optionChaoticNeutral = (Fl_Round_Button *)0;
Fl_Round_Button *optionLawfulEvil = (Fl_Round_Button *)0;
Fl_Round_Button *optionNeutralEvil = (Fl_Round_Button *)0;
Fl_Round_Button *optionChaoticEvil = (Fl_Round_Button *)0;
// Ability Scores
Fl_Group *sectionAbilityScores = (Fl_Group *)0;
Fl_Box *decorationAbilityScores = (Fl_Box *)0;
Fl_Button *buttonRollAbilityScores = (Fl_Button *)0;
Fl_Value_Output *valueConstitution = (Fl_Value_Output *)0;
Fl_Value_Output *valueStrength = (Fl_Value_Output *)0;
Fl_Value_Output *valueDexterity = (Fl_Value_Output *)0;
Fl_Value_Output *valueIntelligence = (Fl_Value_Output *)0;
Fl_Value_Output *valueWisdom = (Fl_Value_Output *)0;
Fl_Value_Output *valueCharisma = (Fl_Value_Output *)0;
// Class Levels
Fl_Group *sectionClassLevels = (Fl_Group *)0;
Fl_Box *decorationClassLevels = (Fl_Box *)0;
Fl_Value_Slider *sliderBarbarian = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderBard = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderCleric = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderDruid = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderFighter = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderMonk = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderPaladin = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderRanger = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderRogue = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderSorcerer = (Fl_Value_Slider *)0;
Fl_Value_Slider *sliderWizard = (Fl_Value_Slider *)0;
// Inventory
Fl_Group *sectionInventory = (Fl_Group *)0;
Fl_Box *decorationInventory = (Fl_Box *)0;
Fl_Input *multilineItems = (Fl_Input *)0;
// Commands /* NEED TO UPDATE */
Fl_Group *sectionCommands = (Fl_Group *)0;
Fl_Box *decorationCommands = (Fl_Box *)0;
Fl_Button *buttonReset = (Fl_Button *)0;
Fl_Button *buttonCreateCharacterFile = (Fl_Button *)0;



/* Global Input Variables */

//Name
string nameInput;
// Age
int ageChoice;
//Race
int raceChoice;
// Gender
int genderChoice;
// Ability Scores
int abilityscoreRoll[6];
// Alignment
int goodevilChoice;
int lawfullchaoticChoice;
// Class Levels
int classlevelChoice[11];
// Inventory
string itemsInput;
vector<string> itemsList;



/* Global Backend variable */
Player character = Player();



/* GUI Callback Function Declarations */

// Name
void singleName_CALLBACK(Fl_Input*);
// Age
void roundYoung_CALLBACK();
void roundMiddleAge_CALLBACK();
void roundOld_CALLBACK();
void roundVenerable_CALLBACK();
// Race
void roundDwarf_CALLBACK();
void roundGnome_CALLBACK();
void roundElf_CALLBACK();
void roundHalfElf_CALLBACK();
void roundHalfOrc_CALLBACK();
void roundHalfling_CALLBACK();
void roundHuman_CALLBACK();
// Gender
void roundMale_CALLBACK();
void roundFemale_CALLBACK();
// Alignment
void optionLawfulGood_CALLBACK();
void optionNeutralGood_CALLBACK();
void optionChaoticGood_CALLBACK();
void optionLawfulNeutral_CALLBACK();
void optionNeutral_CALLBACK();
void optionChaoticNeutral_CALLBACK();
void optionLawfulEvil_CALLBACK();
void optionNeutralEvil_CALLBACK();
void optionChaoticEvil_CALLBACK();
// Ability Scores
void buttonRollAbilityScores_CALLBACK();
// Class Levels
void sliderBarbarian_CALLBACK(Fl_Value_Slider*);
void sliderBard_CALLBACK(Fl_Value_Slider*);
void sliderCleric_CALLBACK(Fl_Value_Slider*);
void sliderDruid_CALLBACK(Fl_Value_Slider*);
void sliderFighter_CALLBACK(Fl_Value_Slider*);
void sliderMonk_CALLBACK(Fl_Value_Slider*);
void sliderPaladin_CALLBACK(Fl_Value_Slider*);
void sliderRanger_CALLBACK(Fl_Value_Slider*);
void sliderRogue_CALLBACK(Fl_Value_Slider*);
void sliderSorcerer_CALLBACK(Fl_Value_Slider*);
void sliderWizard_CALLBACK(Fl_Value_Slider*);
// Inventory
void multilineItems_CALLBACK(Fl_Input*);
// Commands
void buttonReset_CALLBACK();
void buttonCreateCharacterFile_CALLBACK();



/* Extra Functions Declarations */

int rollAbilityScore();
int countInventoryItems();
void parseInventoryItems();
void resetName();
void resetAge();
void resetRace();
void resetGender();
void resetAbiltiyScores();
void resetAlignment();
void resetClassLevels();
void resetInventory();
void resetCommands();
void toggleClassLevels(int);
void outputCharacter();



/* Start of Program Execution */


/**
* Start of program execution.  Acts as the main hub for the program.
*  Mainly in charge of the GUI.
*
* @param none
*
* @return 0 successful program execution and close.
*/
int main()
{
	srand(time(0));

	// window
	Fl_Window window(1220, 635, "Pathfinder Character Creator");
	window.box(FL_BORDER_BOX);
	window.color((Fl_Color)36);
	window.when(FL_WHEN_NEVER);
	window.begin();

	/* Name */

	// sectionName
	sectionName = new Fl_Group(150, 35, 340, 70, "Name");
	sectionName->box(FL_BORDER_BOX);
	sectionName->color(FL_INACTIVE_COLOR);
	sectionName->labelfont(5);
	sectionName->labelsize(16);
	sectionName->labelcolor(FL_BACKGROUND2_COLOR);
	sectionName->when(FL_WHEN_NEVER);
	sectionName->tooltip("Enter a name in the \"Input\" field.\n(click or move out of the section to close)");
	// decorationName
	decorationName = new Fl_Box(155, 40, 330, 60);
	decorationName->box(FL_BORDER_BOX);
	decorationName->color((Fl_Color)9);
	decorationName->labeltype(FL_NO_LABEL);
	decorationName->when(FL_WHEN_NEVER);
	// singleName
	singleName = new Fl_Input(215, 55, 255, 30, "Input:");
	singleName->box(FL_BORDER_BOX);
	singleName->labelfont(4);
	singleName->labelsize(12);
	singleName->textfont(4);
	singleName->textsize(12);
	singleName->maximum_size(32);
	singleName->callback((Fl_Callback*)singleName_CALLBACK);
	singleName->when(FL_WHEN_CHANGED);
	sectionName->end();

	/* Age */

	// sectionAge
	sectionAge = new Fl_Group(100, 150, 440, 70, "Age");
	sectionAge->box(FL_BORDER_BOX);
	sectionAge->color(FL_INACTIVE_COLOR);
	sectionAge->labelfont(5);
	sectionAge->labelsize(16);
	sectionAge->labelcolor(FL_BACKGROUND2_COLOR);
	sectionAge->when(FL_WHEN_NEVER);
	sectionAge->tooltip("Select an age group by clicking on an age group name or round button.\n(click or move out of the section to close)");
	// decorationAge
	decorationAge = new Fl_Box(105, 155, 430, 60);
	decorationAge->box(FL_BORDER_BOX);
	decorationAge->color((Fl_Color)10);
	decorationAge->labeltype(FL_NO_LABEL);
	decorationAge->when(FL_WHEN_NEVER);
	// roundYoung
	roundYoung = new Fl_Round_Button(115, 170, 95, 30, "Young");
	roundYoung->type(102);
	roundYoung->down_box(FL_ROUND_UP_BOX);
	roundYoung->selection_color(FL_SELECTION_COLOR);
	roundYoung->labelfont(4);
	roundYoung->labelsize(12);
	roundYoung->callback((Fl_Callback*)roundYoung_CALLBACK);
	// roundMiddleAge
	roundMiddleAge = new Fl_Round_Button(220, 170, 95, 30, "Middle Age");
	roundMiddleAge->type(102);
	roundMiddleAge->down_box(FL_ROUND_UP_BOX);
	roundMiddleAge->selection_color(FL_SELECTION_COLOR);
	roundMiddleAge->labelfont(4);
	roundMiddleAge->labelsize(12);
	roundMiddleAge->callback((Fl_Callback*)roundMiddleAge_CALLBACK);
	// roundOld
	roundOld = new Fl_Round_Button(325, 170, 95, 30, "Old");
	roundOld->type(102);
	roundOld->down_box(FL_ROUND_UP_BOX);
	roundOld->selection_color(FL_SELECTION_COLOR);
	roundOld->labelfont(4);
	roundOld->labelsize(12);
	roundOld->callback((Fl_Callback*)roundOld_CALLBACK);
	// roundVenerable
	roundVenerable = new Fl_Round_Button(430, 170, 95, 30, "Venerable");
	roundVenerable->type(102);
	roundVenerable->down_box(FL_ROUND_UP_BOX);
	roundVenerable->selection_color(FL_SELECTION_COLOR);
	roundVenerable->labelfont(4);
	roundVenerable->labelsize(12);
	roundVenerable->callback((Fl_Callback*)roundVenerable_CALLBACK);
	sectionAge->end();

	/* Race */

	// sectionRace
	sectionRace = new Fl_Group(95, 255, 310, 160, "Race");
	sectionRace->box(FL_BORDER_BOX);
	sectionRace->color(FL_INACTIVE_COLOR);
	sectionRace->labelfont(5);
	sectionRace->labelsize(16);
	sectionRace->labelcolor(FL_BACKGROUND2_COLOR);
	sectionRace->when(FL_WHEN_NEVER);
	sectionRace->tooltip("Select a race by clicking on a race name or round button.\n(click or move out of the section to close)");
	// decorationRace
	decorationRace = new Fl_Box(100, 260, 300, 150);
	decorationRace->box(FL_BORDER_BOX);
	decorationRace->color((Fl_Color)10);
	decorationRace->labeltype(FL_NO_LABEL);
	decorationRace->when(FL_WHEN_NEVER);
	// roundDwarf
	roundDwarf = new Fl_Round_Button(115, 275, 80, 30, "Dwarf");
	roundDwarf->type(102);
	roundDwarf->down_box(FL_ROUND_UP_BOX);
	roundDwarf->selection_color(FL_SELECTION_COLOR);
	roundDwarf->labelfont(4);
	roundDwarf->labelsize(12);
	roundDwarf->callback((Fl_Callback*)roundDwarf_CALLBACK);
	// roundGnome
	roundGnome = new Fl_Round_Button(115, 320, 80, 30, "Gnome");
	roundGnome->type(102);
	roundGnome->down_box(FL_ROUND_UP_BOX);
	roundGnome->selection_color(FL_SELECTION_COLOR);
	roundGnome->labelfont(4);
	roundGnome->labelsize(12);
	roundGnome->callback((Fl_Callback*)roundGnome_CALLBACK);
	// roundElf
	roundElf = new Fl_Round_Button(115, 365, 80, 30, "Elf");
	roundElf->type(102);
	roundElf->down_box(FL_ROUND_UP_BOX);
	roundElf->selection_color(FL_SELECTION_COLOR);
	roundElf->labelfont(4);
	roundElf->labelsize(12);
	roundElf->callback((Fl_Callback*)roundElf_CALLBACK);
	// roundHalfElf
	roundHalfElf = new Fl_Round_Button(210, 275, 80, 30, "Half-Elf");
	roundHalfElf->type(102);
	roundHalfElf->down_box(FL_ROUND_UP_BOX);
	roundHalfElf->selection_color(FL_SELECTION_COLOR);
	roundHalfElf->labelfont(4);
	roundHalfElf->labelsize(12);
	roundHalfElf->callback((Fl_Callback*)roundHalfElf_CALLBACK);
	// roundHalfOrc
	roundHalfOrc = new Fl_Round_Button(210, 320, 80, 30, "Half-Orc");
	roundHalfOrc->type(102);
	roundHalfOrc->down_box(FL_ROUND_UP_BOX);
	roundHalfOrc->selection_color(FL_SELECTION_COLOR);
	roundHalfOrc->labelfont(4);
	roundHalfOrc->labelsize(12);
	roundHalfOrc->callback((Fl_Callback*)roundHalfOrc_CALLBACK);
	// roundHalfling
	roundHalfling = new Fl_Round_Button(210, 365, 80, 30, "Halfling");
	roundHalfling->type(102);
	roundHalfling->down_box(FL_ROUND_UP_BOX);
	roundHalfling->selection_color(FL_SELECTION_COLOR);
	roundHalfling->labelfont(4);
	roundHalfling->labelsize(12);
	roundHalfling->callback((Fl_Callback*)roundHalfling_CALLBACK);
	// roundHuman
	roundHuman = new Fl_Round_Button(305, 275, 80, 30, "Human");
	roundHuman->type(102);
	roundHuman->down_box(FL_ROUND_UP_BOX);
	roundHuman->selection_color(FL_SELECTION_COLOR);
	roundHuman->labelfont(4);
	roundHuman->labelsize(12);
	roundHuman->callback((Fl_Callback*)roundHuman_CALLBACK);
	sectionRace->end();

	/* Gender */

	// sectionGender
	sectionGender = new Fl_Group(440, 255, 105, 115, "Gender");
	sectionGender->box(FL_BORDER_BOX);
	sectionGender->color(FL_INACTIVE_COLOR);
	sectionGender->labelfont(5);
	sectionGender->labelsize(16);
	sectionGender->labelcolor(FL_BACKGROUND2_COLOR);
	sectionGender->when(FL_WHEN_NEVER);
	sectionGender->tooltip("Select a gender by clicking on a gender name or round button.\n(click or move out of the section to close)");
	// decorationGender
	decorationGender = new Fl_Box(445, 260, 95, 105);
	decorationGender->box(FL_BORDER_BOX);
	decorationGender->color((Fl_Color)10);
	decorationGender->labeltype(FL_NO_LABEL);
	decorationGender->when(FL_WHEN_NEVER);
	// roundMale
	roundMale = new Fl_Round_Button(460, 275, 65, 30, "Male");
	roundMale->type(102);
	roundMale->down_box(FL_ROUND_UP_BOX);
	roundMale->selection_color(FL_SELECTION_COLOR);
	roundMale->labelfont(4);
	roundMale->labelsize(12);
	roundMale->callback((Fl_Callback*)roundMale_CALLBACK);
	// roundFemale
	roundFemale = new Fl_Round_Button(460, 320, 65, 30, "Female");
	roundFemale->type(102);
	roundFemale->down_box(FL_ROUND_UP_BOX);
	roundFemale->selection_color(FL_SELECTION_COLOR);
	roundFemale->labelfont(4);
	roundFemale->labelsize(12);
	roundFemale->callback((Fl_Callback*)roundFemale_CALLBACK);
	sectionGender->end();

	/* Alignment */

	// sectionAlignment
	sectionAlignment = new Fl_Group(15, 460, 290, 160, "Alignment");
	sectionAlignment->box(FL_BORDER_BOX);
	sectionAlignment->color(FL_INACTIVE_COLOR);
	sectionAlignment->labelfont(5);
	sectionAlignment->labelsize(16);
	sectionAlignment->labelcolor((Fl_Color)55);
	sectionAlignment->when(FL_WHEN_NEVER);
	sectionAlignment->tooltip("Select an alignment by clicking on a round button inside of the grid.  Please note that the choice you make here will determine the available classes you can be.\n(click or move out of the section to close)");
	// decorationAlignment
	decorationAlignment = new Fl_Box(20, 465, 280, 150);
	decorationAlignment->box(FL_BORDER_BOX);
	decorationAlignment->color((Fl_Color)11);
	decorationAlignment->labeltype(FL_NO_LABEL);
	decorationAlignment->when(FL_WHEN_NEVER);
	// gridLawful
	gridLawful = new Fl_Box(90, 495, 65, 105, "Lawful");
	gridLawful->box(FL_BORDER_FRAME);
	gridLawful->color(FL_FOREGROUND_COLOR);
	gridLawful->labelfont(4);
	gridLawful->labelsize(12);
	gridLawful->align(Fl_Align(FL_ALIGN_TOP));
	gridLawful->when(FL_WHEN_NEVER);
	// gridNeutral0
	gridNeutral0 = new Fl_Box(155, 495, 65, 105, "Neutral");
	gridNeutral0->box(FL_BORDER_FRAME);
	gridNeutral0->color(FL_FOREGROUND_COLOR);
	gridNeutral0->labelfont(4);
	gridNeutral0->labelsize(12);
	gridNeutral0->align(Fl_Align(FL_ALIGN_TOP));
	gridNeutral0->when(FL_WHEN_NEVER);
	// gridChaotic
	gridChaotic = new Fl_Box(220, 495, 65, 105, "Chaotic");
	gridChaotic->box(FL_BORDER_FRAME);
	gridChaotic->color(FL_FOREGROUND_COLOR);
	gridChaotic->labelfont(4);
	gridChaotic->labelsize(12);
	gridChaotic->align(Fl_Align(FL_ALIGN_TOP));
	gridChaotic->when(FL_WHEN_NEVER);
	// gridGood
	gridGood = new Fl_Box(90, 495, 195, 35, "Good");
	gridGood->box(FL_BORDER_FRAME);
	gridGood->color(FL_FOREGROUND_COLOR);
	gridGood->labelfont(4);
	gridGood->labelsize(12);
	gridGood->align(Fl_Align(FL_ALIGN_LEFT));
	gridGood->when(FL_WHEN_NEVER);
	// gridNeutral1
	gridNeutral1 = new Fl_Box(90, 530, 195, 35, "Neutral");
	gridNeutral1->box(FL_BORDER_FRAME);
	gridNeutral1->color(FL_FOREGROUND_COLOR);
	gridNeutral1->labelfont(4);
	gridNeutral1->labelsize(12);
	gridNeutral1->align(Fl_Align(FL_ALIGN_LEFT));
	gridNeutral1->when(FL_WHEN_NEVER);
	// gridEvil
	gridEvil = new Fl_Box(90, 565, 195, 35, "Evil");
	gridEvil->box(FL_BORDER_FRAME);
	gridEvil->color(FL_FOREGROUND_COLOR);
	gridEvil->labelfont(4);
	gridEvil->labelsize(12);
	gridEvil->align(Fl_Align(FL_ALIGN_LEFT));
	gridEvil->when(FL_WHEN_NEVER);
	// optionLawfulGood
	optionLawfulGood = new Fl_Round_Button(110, 500, 25, 25);
	optionLawfulGood->type(102);
	optionLawfulGood->down_box(FL_ROUND_DOWN_BOX);
	optionLawfulGood->selection_color(FL_SELECTION_COLOR);
	optionLawfulGood->labeltype(FL_NO_LABEL);
	optionLawfulGood->labelfont(4);
	optionLawfulGood->labelsize(16);
	optionLawfulGood->callback((Fl_Callback*)optionLawfulGood_CALLBACK);
	// optionNeutralGood
	optionNeutralGood = new Fl_Round_Button(175, 500, 25, 25);
	optionNeutralGood->type(102);
	optionNeutralGood->down_box(FL_ROUND_DOWN_BOX);
	optionNeutralGood->selection_color(FL_SELECTION_COLOR);
	optionNeutralGood->labeltype(FL_NO_LABEL);
	optionNeutralGood->labelfont(4);
	optionNeutralGood->labelsize(16);
	optionNeutralGood->callback((Fl_Callback*)optionNeutralGood_CALLBACK);
	// optionChaoticGood
	optionChaoticGood = new Fl_Round_Button(240, 500, 25, 25);
	optionChaoticGood->type(102);
	optionChaoticGood->down_box(FL_ROUND_DOWN_BOX);
	optionChaoticGood->selection_color(FL_SELECTION_COLOR);
	optionChaoticGood->labeltype(FL_NO_LABEL);
	optionChaoticGood->labelfont(4);
	optionChaoticGood->labelsize(16);
	optionChaoticGood->callback((Fl_Callback*)optionChaoticGood_CALLBACK);
	// optionLawfulNeutral
	optionLawfulNeutral = new Fl_Round_Button(110, 535, 25, 25);
	optionLawfulNeutral->type(102);
	optionLawfulNeutral->down_box(FL_ROUND_DOWN_BOX);
	optionLawfulNeutral->selection_color(FL_SELECTION_COLOR);
	optionLawfulNeutral->labeltype(FL_NO_LABEL);
	optionLawfulNeutral->labelfont(4);
	optionLawfulNeutral->labelsize(16);
	optionLawfulNeutral->callback((Fl_Callback*)optionLawfulNeutral_CALLBACK);
	// optionNeutral
	optionNeutral = new Fl_Round_Button(175, 535, 25, 25);
	optionNeutral->type(102);
	optionNeutral->down_box(FL_ROUND_DOWN_BOX);
	optionNeutral->selection_color(FL_SELECTION_COLOR);
	optionNeutral->labeltype(FL_NO_LABEL);
	optionNeutral->labelfont(4);
	optionNeutral->labelsize(16);
	optionNeutral->callback((Fl_Callback*)optionNeutral_CALLBACK);
	// optionChaoticNeutral
	optionChaoticNeutral = new Fl_Round_Button(240, 535, 25, 25);
	optionChaoticNeutral->type(102);
	optionChaoticNeutral->down_box(FL_ROUND_DOWN_BOX);
	optionChaoticNeutral->selection_color(FL_SELECTION_COLOR);
	optionChaoticNeutral->labeltype(FL_NO_LABEL);
	optionChaoticNeutral->labelfont(4);
	optionChaoticNeutral->labelsize(16);
	optionChaoticNeutral->callback((Fl_Callback*)optionChaoticNeutral_CALLBACK);
	// optionLawfulEvil
	optionLawfulEvil = new Fl_Round_Button(110, 570, 25, 25);
	optionLawfulEvil->type(102);
	optionLawfulEvil->down_box(FL_ROUND_DOWN_BOX);
	optionLawfulEvil->selection_color(FL_SELECTION_COLOR);
	optionLawfulEvil->labeltype(FL_NO_LABEL);
	optionLawfulEvil->labelfont(4);
	optionLawfulEvil->labelsize(16);
	optionLawfulEvil->callback((Fl_Callback*)optionLawfulEvil_CALLBACK);
	// optionNeutralEvil
	optionNeutralEvil = new Fl_Round_Button(175, 570, 25, 25);
	optionNeutralEvil->type(102);
	optionNeutralEvil->down_box(FL_ROUND_DOWN_BOX);
	optionNeutralEvil->selection_color(FL_SELECTION_COLOR);
	optionNeutralEvil->labeltype(FL_NO_LABEL);
	optionNeutralEvil->labelfont(4);
	optionNeutralEvil->labelsize(16);
	optionNeutralEvil->callback((Fl_Callback*)optionNeutralEvil_CALLBACK);
	// optionChaoticEvil
	optionChaoticEvil = new Fl_Round_Button(240, 570, 25, 25);
	optionChaoticEvil->type(102);
	optionChaoticEvil->down_box(FL_ROUND_DOWN_BOX);
	optionChaoticEvil->selection_color(FL_SELECTION_COLOR);
	optionChaoticEvil->labeltype(FL_NO_LABEL);
	optionChaoticEvil->labelfont(4);
	optionChaoticEvil->labelsize(16);
	optionChaoticEvil->callback((Fl_Callback*)optionChaoticEvil_CALLBACK);
	sectionAlignment->end();

	/* Ability Scores */

	// sectionAbilityScores
	sectionAbilityScores = new Fl_Group(330, 490, 295, 130, "Ability Scores");
	sectionAbilityScores->box(FL_BORDER_BOX);
	sectionAbilityScores->color(FL_INACTIVE_COLOR);
	sectionAbilityScores->labelfont(5);
	sectionAbilityScores->labelsize(16);
	sectionAbilityScores->labelcolor(FL_BACKGROUND2_COLOR);
	sectionAbilityScores->when(FL_WHEN_NEVER);
	sectionAbilityScores->tooltip("Click on the \"Roll Ability Scores\" button to generate a new set of Ability Scores.\n(click or move out of the section to close)");
	// decorationAbilityScores
	decorationAbilityScores = new Fl_Box(335, 495, 285, 120);
	decorationAbilityScores->box(FL_BORDER_BOX);
	decorationAbilityScores->color((Fl_Color)12);
	decorationAbilityScores->labeltype(FL_NO_LABEL);
	decorationAbilityScores->when(FL_WHEN_NEVER);
	// buttonRollAbilityScores
	buttonRollAbilityScores = new Fl_Button(400, 510, 155, 30, "Roll Ability Scores");
	buttonRollAbilityScores->box(FL_ENGRAVED_BOX);
	buttonRollAbilityScores->down_box(FL_EMBOSSED_BOX);
	buttonRollAbilityScores->selection_color(FL_SELECTION_COLOR);
	buttonRollAbilityScores->labelfont(4);
	buttonRollAbilityScores->labelsize(12);
	buttonRollAbilityScores->callback((Fl_Callback*)buttonRollAbilityScores_CALLBACK);
	// valueConstitution
	valueConstitution = new Fl_Value_Output(350, 570, 30, 30, "CON");
	valueConstitution->box(FL_BORDER_BOX);
	valueConstitution->color((Fl_Color)41);
	valueConstitution->selection_color(FL_SELECTION_COLOR);
	valueConstitution->labelfont(4);
	valueConstitution->labelsize(12);
	valueConstitution->minimum(3);
	valueConstitution->maximum(18);
	valueConstitution->textfont(4);
	valueConstitution->textsize(12);
	valueConstitution->textcolor(FL_BACKGROUND2_COLOR);
	valueConstitution->align(Fl_Align(FL_ALIGN_TOP));
	valueConstitution->when(FL_WHEN_NEVER);
	// valueStrength
	valueStrength = new Fl_Value_Output(395, 570, 30, 30, "STR");
	valueStrength->box(FL_BORDER_BOX);
	valueStrength->color((Fl_Color)41);
	valueStrength->selection_color(FL_SELECTION_COLOR);
	valueStrength->labelfont(4);
	valueStrength->labelsize(12);
	valueStrength->minimum(3);
	valueStrength->maximum(18);
	valueStrength->textfont(4);
	valueStrength->textsize(12);
	valueStrength->textcolor(FL_BACKGROUND2_COLOR);
	valueStrength->align(Fl_Align(FL_ALIGN_TOP));
	valueStrength->when(FL_WHEN_NEVER);
	// valueDexterity
	valueDexterity = new Fl_Value_Output(440, 570, 30, 30, "DEX");
	valueDexterity->box(FL_BORDER_BOX);
	valueDexterity->color((Fl_Color)41);
	valueDexterity->selection_color(FL_SELECTION_COLOR);
	valueDexterity->labelfont(4);
	valueDexterity->labelsize(12);
	valueDexterity->minimum(3);
	valueDexterity->maximum(18);
	valueDexterity->textfont(4);
	valueDexterity->textsize(12);
	valueDexterity->textcolor(FL_BACKGROUND2_COLOR);
	valueDexterity->align(Fl_Align(FL_ALIGN_TOP));
	valueDexterity->when(FL_WHEN_NEVER);
	// valueIntelligence
	valueIntelligence = new Fl_Value_Output(485, 570, 30, 30, "INT");
	valueIntelligence->box(FL_BORDER_BOX);
	valueIntelligence->color((Fl_Color)41);
	valueIntelligence->selection_color(FL_SELECTION_COLOR);
	valueIntelligence->labelfont(4);
	valueIntelligence->labelsize(12);
	valueIntelligence->minimum(3);
	valueIntelligence->maximum(18);
	valueIntelligence->textfont(4);
	valueIntelligence->textsize(12);
	valueIntelligence->textcolor(FL_BACKGROUND2_COLOR);
	valueIntelligence->align(Fl_Align(FL_ALIGN_TOP));
	valueIntelligence->when(FL_WHEN_NEVER);
	// valueWisdom
	valueWisdom = new Fl_Value_Output(530, 570, 30, 30, "WIS");
	valueWisdom->box(FL_BORDER_BOX);
	valueWisdom->color((Fl_Color)41);
	valueWisdom->selection_color(FL_SELECTION_COLOR);
	valueWisdom->labelfont(4);
	valueWisdom->labelsize(12);
	valueWisdom->minimum(3);
	valueWisdom->maximum(18);
	valueWisdom->textfont(4);
	valueWisdom->textsize(12);
	valueWisdom->textcolor(FL_BACKGROUND2_COLOR);
	valueWisdom->align(Fl_Align(FL_ALIGN_TOP));
	valueWisdom->when(FL_WHEN_NEVER);
	// valueCharisma
	valueCharisma = new Fl_Value_Output(575, 570, 30, 30, "CHA");
	valueCharisma->box(FL_BORDER_BOX);
	valueCharisma->color((Fl_Color)41);
	valueCharisma->selection_color(FL_SELECTION_COLOR);
	valueCharisma->labelfont(4);
	valueCharisma->labelsize(12);
	valueCharisma->minimum(3);
	valueCharisma->maximum(18);
	valueCharisma->textfont(4);
	valueCharisma->textsize(12);
	valueCharisma->textcolor(FL_BACKGROUND2_COLOR);
	valueCharisma->align(Fl_Align(FL_ALIGN_TOP));
	valueCharisma->when(FL_WHEN_NEVER);
	sectionAbilityScores->end();

	/* Class Levels */

	// sectionClassLevels
	sectionClassLevels = new Fl_Group(640, 35, 295, 475, "Class Levels");
	sectionClassLevels->box(FL_BORDER_BOX);
	sectionClassLevels->color(FL_INACTIVE_COLOR);
	sectionClassLevels->labelfont(5);
	sectionClassLevels->labelsize(16);
	sectionClassLevels->labelcolor(FL_BACKGROUND2_COLOR);
	sectionClassLevels->when(FL_WHEN_NEVER);
	sectionClassLevels->tooltip("Move the sliders to adjust the various class levels.  If a slider is unmovable, it is disabled because you have choosen an incompatible Alignment.\n(click or move out of the section to close)");
	// decorationClassLevels
	decorationClassLevels = new Fl_Box(645, 40, 285, 465);
	decorationClassLevels->box(FL_BORDER_BOX);
	decorationClassLevels->color((Fl_Color)14);
	decorationClassLevels->labeltype(FL_NO_LABEL);
	decorationClassLevels->labelfont(4);
	decorationClassLevels->labelsize(12);
	decorationClassLevels->when(FL_WHEN_NEVER);
	// sliderBarbarian
	sliderBarbarian = new Fl_Value_Slider(735, 55, 180, 35, "Barbarian:");
	sliderBarbarian->type(5);
	sliderBarbarian->box(FL_BORDER_BOX);
	sliderBarbarian->color((Fl_Color)41);
	sliderBarbarian->labelfont(4);
	sliderBarbarian->labelsize(12);
	sliderBarbarian->maximum(20);
	sliderBarbarian->step(1);
	sliderBarbarian->textfont(4);
	sliderBarbarian->textsize(12);
	sliderBarbarian->textcolor(FL_BACKGROUND2_COLOR);
	sliderBarbarian->align(Fl_Align(FL_ALIGN_LEFT));
	sliderBarbarian->callback((Fl_Callback*)sliderBarbarian_CALLBACK);
	// sliderBard
	sliderBard = new Fl_Value_Slider(735, 95, 180, 35, "Bard:");
	sliderBard->type(5);
	sliderBard->box(FL_BORDER_BOX);
	sliderBard->color((Fl_Color)41);
	sliderBard->labelfont(4);
	sliderBard->labelsize(12);
	sliderBard->maximum(20);
	sliderBard->step(1);
	sliderBard->textfont(4);
	sliderBard->textsize(12);
	sliderBard->textcolor(FL_BACKGROUND2_COLOR);
	sliderBard->align(Fl_Align(FL_ALIGN_LEFT));
	sliderBard->callback((Fl_Callback*)sliderBard_CALLBACK);
	// sliderCleric
	sliderCleric = new Fl_Value_Slider(735, 135, 180, 35, "Cleric:");
	sliderCleric->type(5);
	sliderCleric->box(FL_BORDER_BOX);
	sliderCleric->color((Fl_Color)41);
	sliderCleric->labelfont(4);
	sliderCleric->labelsize(12);
	sliderCleric->maximum(20);
	sliderCleric->step(1);
	sliderCleric->textfont(4);
	sliderCleric->textsize(12);
	sliderCleric->textcolor(FL_BACKGROUND2_COLOR);
	sliderCleric->align(Fl_Align(FL_ALIGN_LEFT));
	sliderCleric->callback((Fl_Callback*)sliderCleric_CALLBACK);
	// sliderDruid
	sliderDruid = new Fl_Value_Slider(735, 175, 180, 35, "Druid:");
	sliderDruid->type(5);
	sliderDruid->box(FL_BORDER_BOX);
	sliderDruid->color((Fl_Color)41);
	sliderDruid->labelfont(4);
	sliderDruid->labelsize(12);
	sliderDruid->maximum(20);
	sliderDruid->step(1);
	sliderDruid->textfont(4);
	sliderDruid->textsize(12);
	sliderDruid->textcolor(FL_BACKGROUND2_COLOR);
	sliderDruid->align(Fl_Align(FL_ALIGN_LEFT));
	sliderDruid->callback((Fl_Callback*)sliderDruid_CALLBACK);
	// sliderFighter
	sliderFighter = new Fl_Value_Slider(735, 215, 180, 35, "Fighter:");
	sliderFighter->type(5);
	sliderFighter->box(FL_BORDER_BOX);
	sliderFighter->color((Fl_Color)41);
	sliderFighter->labelfont(4);
	sliderFighter->labelsize(12);
	sliderFighter->maximum(20);
	sliderFighter->step(1);
	sliderFighter->textfont(4);
	sliderFighter->textsize(12);
	sliderFighter->textcolor(FL_BACKGROUND2_COLOR);
	sliderFighter->align(Fl_Align(FL_ALIGN_LEFT));
	sliderFighter->callback((Fl_Callback*)sliderFighter_CALLBACK);
	// sliderMonk
	sliderMonk = new Fl_Value_Slider(735, 255, 180, 35, "Monk:");
	sliderMonk->type(5);
	sliderMonk->box(FL_BORDER_BOX);
	sliderMonk->color((Fl_Color)41);
	sliderMonk->labelfont(4);
	sliderMonk->labelsize(12);
	sliderMonk->maximum(20);
	sliderMonk->step(1);
	sliderMonk->textfont(4);
	sliderMonk->textsize(12);
	sliderMonk->textcolor(FL_BACKGROUND2_COLOR);
	sliderMonk->align(Fl_Align(FL_ALIGN_LEFT));
	sliderMonk->callback((Fl_Callback*)sliderMonk_CALLBACK);
	// sliderPaladin
	sliderPaladin = new Fl_Value_Slider(735, 295, 180, 35, "Paladin:");
	sliderPaladin->type(5);
	sliderPaladin->box(FL_BORDER_BOX);
	sliderPaladin->color((Fl_Color)41);
	sliderPaladin->labelfont(4);
	sliderPaladin->labelsize(12);
	sliderPaladin->maximum(20);
	sliderPaladin->step(1);
	sliderPaladin->textfont(4);
	sliderPaladin->textsize(12);
	sliderPaladin->textcolor(FL_BACKGROUND2_COLOR);
	sliderPaladin->align(Fl_Align(FL_ALIGN_LEFT));
	sliderPaladin->callback((Fl_Callback*)sliderPaladin_CALLBACK);
	// sliderRanger
	sliderRanger = new Fl_Value_Slider(735, 335, 180, 35, "Ranger:");
	sliderRanger->type(5);
	sliderRanger->box(FL_BORDER_BOX);
	sliderRanger->color((Fl_Color)41);
	sliderRanger->labelfont(4);
	sliderRanger->labelsize(12);
	sliderRanger->maximum(20);
	sliderRanger->step(1);
	sliderRanger->textfont(4);
	sliderRanger->textsize(12);
	sliderRanger->textcolor(FL_BACKGROUND2_COLOR);
	sliderRanger->align(Fl_Align(FL_ALIGN_LEFT));
	sliderRanger->callback((Fl_Callback*)sliderRanger_CALLBACK);
	// sliderRogue
	sliderRogue = new Fl_Value_Slider(735, 375, 180, 35, "Rogue:");
	sliderRogue->type(5);
	sliderRogue->box(FL_BORDER_BOX);
	sliderRogue->color((Fl_Color)41);
	sliderRogue->labelfont(4);
	sliderRogue->labelsize(12);
	sliderRogue->maximum(20);
	sliderRogue->step(1);
	sliderRogue->textfont(4);
	sliderRogue->textsize(12);
	sliderRogue->textcolor(FL_BACKGROUND2_COLOR);
	sliderRogue->align(Fl_Align(FL_ALIGN_LEFT));
	sliderRogue->callback((Fl_Callback*)sliderRogue_CALLBACK);
	// sliderSorcerer
	sliderSorcerer = new Fl_Value_Slider(735, 415, 180, 35, "Sorcerer:");
	sliderSorcerer->type(5);
	sliderSorcerer->box(FL_BORDER_BOX);
	sliderSorcerer->color((Fl_Color)41);
	sliderSorcerer->labelfont(4);
	sliderSorcerer->labelsize(12);
	sliderSorcerer->maximum(20);
	sliderSorcerer->step(1);
	sliderSorcerer->textfont(4);
	sliderSorcerer->textsize(12);
	sliderSorcerer->textcolor(FL_BACKGROUND2_COLOR);
	sliderSorcerer->align(Fl_Align(FL_ALIGN_LEFT));
	sliderSorcerer->callback((Fl_Callback*)sliderSorcerer_CALLBACK);
	// sliderWizard
	sliderWizard = new Fl_Value_Slider(735, 455, 180, 35, "Wizard:");
	sliderWizard->type(5);
	sliderWizard->box(FL_BORDER_BOX);
	sliderWizard->color((Fl_Color)41);
	sliderWizard->labelfont(4);
	sliderWizard->labelsize(12);
	sliderWizard->maximum(20);
	sliderWizard->step(1);
	sliderWizard->textfont(4);
	sliderWizard->textsize(12);
	sliderWizard->textcolor(FL_BACKGROUND2_COLOR);
	sliderWizard->align(Fl_Align(FL_ALIGN_LEFT));
	sliderWizard->callback((Fl_Callback*)sliderWizard_CALLBACK);
	sectionClassLevels->end();

	/* Inventory */

	// sectionInventory
	sectionInventory = new Fl_Group(950, 35, 255, 475, "Inventory");
	sectionInventory->box(FL_BORDER_BOX);
	sectionInventory->color(FL_INACTIVE_COLOR);
	sectionInventory->labelfont(5);
	sectionInventory->labelsize(16);
	sectionInventory->labelcolor(FL_BACKGROUND2_COLOR);
	sectionInventory->when(FL_WHEN_NEVER);
	sectionInventory->tooltip("Enter a list of items line by line.  You can leave this blank if you want to.\n(click or move out of the section to close)");
	// decorationInventory
	decorationInventory = new Fl_Box(955, 40, 245, 465);
	decorationInventory->box(FL_BORDER_BOX);
	decorationInventory->color((Fl_Color)9);
	decorationInventory->labeltype(FL_NO_LABEL);
	decorationInventory->labelfont(4);
	decorationInventory->labelsize(12);
	decorationInventory->when(FL_WHEN_NEVER);
	// multilineItems
	multilineItems = new Fl_Input(1015, 55, 170, 435, "Items:");
	multilineItems->type(4);
	multilineItems->box(FL_BORDER_BOX);
	multilineItems->labelfont(4);
	multilineItems->labelsize(12);
	multilineItems->textfont(4);
	multilineItems->textsize(12);
	multilineItems->wrap(1);
	multilineItems->callback((Fl_Callback*)multilineItems_CALLBACK);
	multilineItems->when(FL_WHEN_CHANGED);
	sectionInventory->end();


	/* Commands */

	//sectionCommands
	sectionCommands = new Fl_Group(640, 550, 565, 70, "Commands");
	sectionCommands->box(FL_BORDER_BOX);
	sectionCommands->color(FL_INACTIVE_COLOR);
	sectionCommands->labelfont(5);
	sectionCommands->labelsize(16);
	sectionCommands->labelcolor(FL_BACKGROUND2_COLOR);
	sectionCommands->when(FL_WHEN_NEVER);
	//decorationAlignment
	decorationAlignment = new Fl_Box(645, 555, 555, 60);
	decorationAlignment->box(FL_BORDER_BOX);
	decorationAlignment->color((Fl_Color)13);
	decorationAlignment->labeltype(FL_NO_LABEL);
	decorationAlignment->when(FL_WHEN_NEVER);
	// buttonReset
	buttonReset = new Fl_Button(720, 570, 125, 30, "Reset");
	buttonReset->tooltip("Clears all data in the form and sets all values to their default settings.\n(click or move out of the colored area to close)");
	buttonReset->box(FL_ENGRAVED_BOX);
	buttonReset->down_box(FL_EMBOSSED_BOX);
	buttonReset->selection_color(FL_SELECTION_COLOR);
	buttonReset->labelfont(5);
	buttonReset->labelsize(16);
	buttonReset->callback((Fl_Callback*)buttonReset_CALLBACK);
	buttonReset->when(FL_WHEN_RELEASE);
	buttonReset->tooltip("Clears all input and selected data.\n(click or move out of the button area to close)");
	// buttonCreateCharacterFile
	buttonCreateCharacterFile = new Fl_Button(950, 570, 225, 30, "Create Character File");
	buttonCreateCharacterFile->box(FL_ENGRAVED_BOX);
	buttonCreateCharacterFile->down_box(FL_EMBOSSED_BOX);
	buttonCreateCharacterFile->selection_color(FL_SELECTION_COLOR);
	buttonCreateCharacterFile->labelfont(5);
	buttonCreateCharacterFile->labelsize(16);
	buttonCreateCharacterFile->callback((Fl_Callback*)buttonCreateCharacterFile_CALLBACK);
	buttonCreateCharacterFile->when(FL_WHEN_RELEASE);
	buttonCreateCharacterFile->deactivate();
	buttonCreateCharacterFile->tooltip("Creates a text file using the \"Name\" that was choosen.  The text file will have all the calculated stats of your character.  Make sure that all sections have been completed.  Completing the inventory section is optional.  The output file will be \"CHARACTER_'Name'.txt!\"\n(click or move out of the button area to close)");
	sectionCommands->end();

	window.end();
	window.show();
	Fl::run();

	return 0;
}



/* Callback Function Definitions */

// Name

/**
* Callback for the name input field.
* Updates the name of the character.
* Also toggles the "Create Character Button" button.
*
* @param o input field for the name
*
* @return none
*/
void singleName_CALLBACK(Fl_Input* o)
{
	clog << "\nInteraction occurred in Name:" << endl;

	if (nameInput == o->value()) {
		cerr << "ERROR: Name has reach maximum size!" << endl;
		clog << "Name is still " << nameInput << "." << endl;
		buttonCreateCharacterFile->activate();
	}
	else if (o->size() > 0) {
		nameInput = o->value();
		clog << "Name updated to " << nameInput << "." << endl;
		buttonCreateCharacterFile->activate();
	}
	else {
		nameInput = o->value();
		clog << "Name cleared!" << endl;
		buttonCreateCharacterFile->deactivate();
	}

	return;
}

// Age

/**
* Callback for the young age round button.
* Updates the age of the character.
*
* @param none
*
* @return none
*/
void roundYoung_CALLBACK()
{
	clog << "\nInteraction occurred in Age:" << endl;

	ageChoice = 0;
	clog << "Age updated to young." << endl;

	return;
}

/**
* Callback for the middle age age round button.
* Updates the age of the character.
*
* @param none
*
* @return none
*/
void roundMiddleAge_CALLBACK()
{
	clog << "\nInteraction in Age:" << endl;

	ageChoice = 1;
	clog << "Age updated to middle age." << endl;

	return;
}

/**
* Callback for the old age round button.
* Updates the age of the character.
*
* @param none
*
* @return none
*/
void roundOld_CALLBACK()
{
	clog << "\nInteraction in Age:" << endl;

	ageChoice = 2;
	clog << "Age updated to old." << endl;

	return;
}

/**
* Callback for the venerable age round button.
* Updates the age of the character.
*
* @param none
*
* @return none
*/
void roundVenerable_CALLBACK()
{
	clog << "\nInteraction in Age:" << endl;

	ageChoice = 3;
	clog << "Age updated to venerable." << endl;

	return;
}

// Race

/**
* Callback for the dwarf race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundDwarf_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 0;
	clog << "Race updated to dwarf." << endl;

	return;
}

/**
* Callback for the gnome race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundGnome_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 1;
	clog << "Race updated to gnome." << endl;

	return;
}

/**
* Callback for the elf race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundElf_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 2;
	clog << "Race updated to elf." << endl;

	return;
}

/**
* Callback for the half-elf race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundHalfElf_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 3;
	clog << "Race updated to half-elf." << endl;

	return;
}

/**
* Callback for the half-orc race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundHalfOrc_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 4;
	clog << "Race updated to half-orc." << endl;

	return;
}

/**
* Callback for the halfling race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundHalfling_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 5;
	clog << "Race updated to halfling." << endl;

	return;
}

/**
* Callback for the human race round button.
* Updates the race of the character.
*
* @param none
*
* @return none
*/
void roundHuman_CALLBACK()
{
	clog << "\nInteraction in Race:" << endl;

	raceChoice = 6;
	clog << "Race updated to human." << endl;

	return;
}

// Gender

/**
* Callback for the male gender round button.
* Updates the gender of the character.
*
* @param none
*
* @return none
*/
void roundMale_CALLBACK()
{
	clog << "\nInteraction in Gender:" << endl;

	genderChoice = 0;
	clog << "Gender updated to male." << endl;

	return;
}

/**
* Callback for the female gender round button.
* Updates the gender of the character.
*
* @param none
*
* @return none
*/
void roundFemale_CALLBACK()
{
	clog << "\nInteraction in Gender:" << endl;

	genderChoice = 1;
	clog << "Gender updated to female." << endl;

	return;
}

// Alignment

/**
* Callback for the lawful good alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionLawfulGood_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 2;
	goodevilChoice = 0;
	clog << "Alignment updated to lawful good." << endl;

	toggleClassLevels(0);

	return;
}

/**
* Callback for the neutral good alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionNeutralGood_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 1;
	goodevilChoice = 0;
	clog << "Alignment updated to neutral good." << endl;

	toggleClassLevels(1);

	return;
}

/**
* Callback for the chaotic good alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionChaoticGood_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 0;
	goodevilChoice = 0;
	clog << "Alignment updated to chaotic good." << endl;

	toggleClassLevels(2);

	return;
}

/**
* Callback for the lawful neutral alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionLawfulNeutral_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 2;
	goodevilChoice = 1;
	clog << "Alignment updated to lawful neutral." << endl;

	toggleClassLevels(3);

	return;
}

/**
* Callback for the true neutral alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionNeutral_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 1;
	goodevilChoice = 1;
	clog << "Alignment updated to true neutral." << endl;

	toggleClassLevels(1);

	return;
}

/**
* Callback for the chaotic neutral alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionChaoticNeutral_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 0;
	goodevilChoice = 1;
	clog << "Alignment updated to chaotic neutral." << endl;

	toggleClassLevels(1);

	return;
}

/**
* Callback for the lawful evil alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionLawfulEvil_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 2;
	goodevilChoice = 2;
	clog << "Alignment updated to lawful evil." << endl;

	toggleClassLevels(4);

	return;
}

/**
* Callback for the neutral evil alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionNeutralEvil_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 1;
	goodevilChoice = 2;
	clog << "Alignment updated to neutral evil." << endl;

	toggleClassLevels(1);

	return;
}

/**
* Callback for the chaotic evil alignment round button.
* Updates the alignment of the character.
* Send request to toggle classes.
*
* @param none
*
* @return none
*/
void optionChaoticEvil_CALLBACK()
{
	clog << "\nInteraction in Alignment:" << endl;

	lawfullchaoticChoice = 0;
	goodevilChoice = 2;
	clog << "Alignment updated to chaotic evil." << endl;

	toggleClassLevels(2);

	return;
}

// Ability Scores

/**
* Callback for the roll ability scores ability scores button.
* Updates ability scores of the character.
*
* @param none
*
* @return none
*/
void buttonRollAbilityScores_CALLBACK()
{
	clog << "\nInteraction in Ability Scores:" << endl;

	clog << "Rolling constitution: ";
	valueConstitution->value(rollAbilityScore());
	abilityscoreRoll[2] = valueConstitution->value();
	clog << "Constitution set to " << abilityscoreRoll[2] << "." << endl;

	clog << "Rolling strength: ";
	valueStrength->value(rollAbilityScore());
	abilityscoreRoll[0] = valueStrength->value();
	clog << "Strength set to " << abilityscoreRoll[0] << "." << endl;

	clog << "Rolling dexterity: ";
	valueDexterity->value(rollAbilityScore());
	abilityscoreRoll[1] = valueDexterity->value();
	clog << "Dexterity set to " << abilityscoreRoll[1] << "." << endl;

	clog << "Rolling intelligence: ";
	valueIntelligence->value(rollAbilityScore());
	abilityscoreRoll[3] = valueIntelligence->value();
	clog << "Intelligence set to " << abilityscoreRoll[3] << "." << endl;

	clog << "Rolling wisdom: ";
	valueWisdom->value(rollAbilityScore());
	abilityscoreRoll[4] = valueWisdom->value();
	clog << "Wisdom set to " << abilityscoreRoll[4] << "." << endl;

	clog << "Rolling charisma: ";
	valueCharisma->value(rollAbilityScore());
	abilityscoreRoll[5] = valueCharisma->value();
	clog << "Charisma set to " << abilityscoreRoll[5] << "." << endl;

	return;
}

// Class Levels

/**
* Callback for the barbarian class's level class levels slider.
* Updates barbarian class's level.
*
* @param o input slider for the barbarian class's level
*
* @return none
*/
void sliderBarbarian_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[0] = o->value();
	cout << "Barbarian level changed to " << classlevelChoice[0] << "." << endl;

	return;
}

/**
* Callback for the bard class's level class levels slider.
* Updates bard class's level.
*
* @param o input slider for the bard class's level
*
* @return none
*/
void sliderBard_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[1] = o->value();
	cout << "Bard level changed to " << classlevelChoice[1] << "." << endl;

	return;
}

/**
* Callback for the cleric class's level class levels slider.
* Updates cleric class's level.
*
* @param o input slider for the cleric class's level
*
* @return none
*/
void sliderCleric_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[2] = o->value();
	cout << "Cleric level changed to " << classlevelChoice[2] << "." << endl;

	return;
}

/**
* Callback for the druid class's level class levels slider.
* Updates druid class's level.
*
* @param o input slider for the druid class's level
*
* @return none
*/
void sliderDruid_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[3] = o->value();
	cout << "Druid level changed to " << classlevelChoice[3] << "." << endl;

	return;
}

/**
* Callback for the fighter class's level class levels slider.
* Updates fighter class's level.
*
* @param o input slider for the fighter class's level
*
* @return none
*/
void sliderFighter_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[4] = o->value();
	cout << "Fighter level changed to " << classlevelChoice[4] << "." << endl;

	return;
}

/**
* Callback for the monk class's level class levels slider.
* Updates monk class's level.
*
* @param o input slider for the monk class's level
*
* @return none
*/
void sliderMonk_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[5] = o->value();
	cout << "Monk level changed to " << classlevelChoice[5] << "." << endl;

	return;
}

/**
* Callback for the paladin class's level class levels slider.
* Updates paladin class's level.
*
* @param o input slider for the paladin class's level
*
* @return none
*/
void sliderPaladin_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[6] = o->value();
	cout << "Paladin level changed to " << classlevelChoice[6] << "." << endl;

	return;
}

/**
* Callback for the ranger class's level class levels slider.
* Updates ranger class's level.
*
* @param o input slider for the ranger class's level
*
* @return none
*/
void sliderRanger_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[7] = o->value();
	cout << "Ranger level changed to " << classlevelChoice[7] << "." << endl;

	return;
}

/**
* Callback for the rogue class's level class levels slider.
* Updates rogue class's level.
*
* @param o input slider for the rogue class's level
*
* @return none
*/
void sliderRogue_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[8] = o->value();
	cout << "Rogue level changed to " << classlevelChoice[8] << "." << endl;

	return;
}

/**
* Callback for the sorcerer class's level class levels slider.
* Updates sorcerer class's level.
*
* @param o input slider for the sorcerer class's level
*
* @return none
*/
void sliderSorcerer_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[9] = o->value();
	cout << "Sorcerer level changed to " << classlevelChoice[9] << "." << endl;

	return;
}

/**
* Callback for the wizard class's level class levels slider.
* Updates wizard class's level.
*
* @param o input slider for the wizard class's level
*
* @return none
*/
void sliderWizard_CALLBACK(Fl_Value_Slider* o)
{
	clog << "\nInteraction in Class Levels:" << endl;

	classlevelChoice[10] = o->value();
	cout << "Wizard level changed to " << classlevelChoice[10] << "." << endl;

	return;
}

// Inventory

/**
* Callback for the inventory input field.
* Updates inventory items.
*
* @param o input field for the inventory
*
* @return none
*/
void multilineItems_CALLBACK(Fl_Input* o)
{
	clog << "\nInteraction in Inventory:" << endl;

	itemsInput = o->value();

	int count;
	if (itemsInput.length() == 0) {
		clog << "Inventory has been cleared!" << endl;
		count = 0;
	}
	else {
		clog << "Inventory information has been edited." << endl;
		count = countInventoryItems() + 1;
	}

	parseInventoryItems();

	clog << "Contains " << count << (count == 1 ? " item." : " items.") << endl;
	for (auto i = itemsList.begin(); i != itemsList.end(); i++) {
		clog << *i << endl;
	}

	return;
}

// Commands

/**
* Callback for the reset button.
* Sends request to reset the form sections.
*
* @param none
*
* @return none
*/
void buttonReset_CALLBACK() {
	clog << "\nInteraction in Command:" << endl;

	clog << "Reset button has been pressed." << endl;

	resetName();
	resetAge();
	resetRace();
	resetGender();
	resetAbiltiyScores();
	resetAlignment();
	resetClassLevels();
	resetInventory();
	resetCommands();

	return;
}

/**
* Callback for the create character file button.
* Verifies if user wants to make a file.
*
* @param none
*
* @return none
*/
void buttonCreateCharacterFile_CALLBACK() {
	clog << "\nInteraction in Command:" << endl;

	switch (fl_choice("Please check to make sure all sections (inventory is optional) are completed.\nAre the required sections completed?", "No", "Yes", 0)) {
	case 0:
		break;
	case 1:
		outputCharacter();
		break;
	case 2:
		break;
	}

	return;
}



/* Extra Functions Definitions */

/**
* Disables and enables appropriate class levels sliders.
*
* @param scenario case of alignments that will toggle similar classes
*
* @return none
*/
void toggleClassLevels(int scenario)
{
	switch (scenario) {
	case 0:
		if (sliderBarbarian->active()) {
			sliderBarbarian->value(0);
			classlevelChoice[0] = sliderBarbarian->value();
			clog << "Barbarian level set to " << classlevelChoice[0] << "." << endl;
			sliderBarbarian->deactivate();
			clog << "Barbarian Class Disabled!" << endl;
		}
		if (sliderDruid->active()) {
			sliderDruid->value(0);
			classlevelChoice[3] = sliderDruid->value();
			clog << "Druid level set to " << classlevelChoice[3] << "." << endl;
			sliderDruid->deactivate();
			clog << "Druid class disabled!" << endl;
		}
		if (!sliderMonk->active()) {
			sliderMonk->activate();
			clog << "Monk class enabled!" << endl;
		}
		if (!sliderPaladin->active()) {
			sliderPaladin->activate();
			clog << "Paladin class enabled!" << endl;
		}
		break;
	case 1:
		if (!sliderBarbarian->active()) {
			sliderBarbarian->activate();
			clog << "Barbarian class enabled!" << endl;
		}
		if (!sliderDruid->active()) {
			sliderDruid->activate();
			clog << "Druid class enabled!" << endl;
		}
		if (sliderMonk->active()) {
			sliderMonk->value(0);
			classlevelChoice[5] = sliderMonk->value();
			clog << "Monk level set to " << classlevelChoice[5] << "." << endl;
			sliderMonk->deactivate();
			clog << "Monk class disabled!" << endl;
		}
		if (sliderPaladin->active()) {
			sliderPaladin->value(0);
			classlevelChoice[6] = sliderPaladin->value();
			clog << "Paladin level set to " << classlevelChoice[6] << "." << endl;
			sliderPaladin->deactivate();
			clog << "Paladin class disabled!" << endl;
		}
		break;
	case 2:
		if (!sliderBarbarian->active()) {
			sliderBarbarian->activate();
			clog << "Barbarian class enabled!" << endl;
		}
		if (sliderDruid->active()) {
			sliderDruid->value(0);
			classlevelChoice[3] = sliderDruid->value();
			clog << "Druid level set to " << classlevelChoice[3] << "." << endl;
			sliderDruid->deactivate();
			clog << "Druid class disabled!" << endl;
		}
		if (sliderMonk->active()) {
			sliderMonk->value(0);
			classlevelChoice[5] = sliderMonk->value();
			clog << "Monk level set to " << classlevelChoice[5] << "." << endl;
			sliderMonk->deactivate();
			clog << "Monk class disabled!" << endl;
		}
		if (sliderPaladin->active()) {
			sliderPaladin->value(0);
			classlevelChoice[6] = sliderPaladin->value();
			clog << "Paladin level set to " << classlevelChoice[6] << "." << endl;
			sliderPaladin->deactivate();
			clog << "Paladin class disabled!" << endl;
		}
		break;
	case 3:
		if (sliderBarbarian->active()) {
			sliderBarbarian->value(0);
			classlevelChoice[0] = sliderBarbarian->value();
			clog << "Barbarian level set to " << classlevelChoice[0] << "." << endl;
			sliderBarbarian->deactivate();
			clog << "Barbarian Class Disabled!" << endl;
		}
		if (!sliderDruid->active()) {
			sliderDruid->activate();
			clog << "Druid class enabled!" << endl;
		}
		if (!sliderMonk->active()) {
			sliderMonk->activate();
			clog << "Monk class enabled!" << endl;
		}
		if (sliderPaladin->active()) {
			sliderPaladin->value(0);
			classlevelChoice[6] = sliderPaladin->value();
			clog << "Paladin level set to " << classlevelChoice[6] << "." << endl;
			sliderPaladin->deactivate();
			clog << "Paladin class disabled!" << endl;
		}
		break;
	case 4:
		if (sliderBarbarian->active()) {
			sliderBarbarian->value(0);
			classlevelChoice[0] = sliderBarbarian->value();
			clog << "Barbarian level set to " << classlevelChoice[0] << "." << endl;
			sliderBarbarian->deactivate();
			clog << "Barbarian class disabled!" << endl;
		}
		if (sliderDruid->active()) {
			sliderDruid->value(0);
			classlevelChoice[3] = sliderDruid->value();
			clog << "Druid level set to " << classlevelChoice[3] << "." << endl;
			sliderDruid->deactivate();
			clog << "Druid class disabled!" << endl;
		}
		if (!sliderMonk->active()) {
			sliderMonk->activate();
			clog << "Monk class enabled!" << endl;
		}
		sliderMonk->activate();
		if (sliderPaladin->active()) {
			sliderPaladin->value(0);
			classlevelChoice[6] = sliderPaladin->value();
			clog << "Paladin level set to " << classlevelChoice[6] << "." << endl;
			sliderPaladin->deactivate();
			clog << "Paladin class disabled!" << endl;
		}
		break;
	}

	return;
}

/**
* Rolls to determine the ability score of an attribute.
*
* @param none
*
* @return sum the final value of the base ability score
*/
int rollAbilityScore()
{
	vector<int> dice;
	int sum = 0;

	for (int i = 0; i <4; i++) {
		dice.push_back(rand() % 6 + 1);
		clog << dice.at(i);
		if (i < 3) {
			clog << ",";
		}
		else {
			clog << " => ";
		}
	}

	sort(dice.begin(), dice.end());
	dice.erase(dice.begin(), dice.begin() + 1);

	for (auto i = dice.begin(); i != dice.end(); i++) {
		sum += *i;
		clog << *i;
		if (i < dice.end() - 1) {
			clog << ",";
		}
	}
	clog << endl;

	return sum;
}

/**
* Counts the amount of items in the inventory.
*
* @param none
*
* @return count number of items found in the inventory list
*/
int countInventoryItems()
{
	string temp = itemsInput;
	int count = 0;
	for (auto i = temp.begin(); i != temp.end(); i++) {
		if (*i == '\n') {
			if (*(i + 1) != '\n' && (i + 1) != temp.end()) {
				count++;
			}
		}
	}

	if (temp.at(0) == '\n') {
		count--;
	}

	return count;
}

/**
* Parses the inventory for items.
* Updates inventory list.
*
* @param none
*
* @return none
*/
void parseInventoryItems() {
	itemsList.clear();

	char* duplicate = strdup(itemsInput.c_str());
	char* token = strtok(duplicate, "\n");

	while (token != NULL) {
		itemsList.push_back(string(token));
		token = strtok(NULL, "\n");
	}

	return;
}

/**
* Clears form data for the name section.
*
* @param none
*
* @return none
*/
void resetName() {
	singleName->value("");

	clog << "Name Section Reset!" << endl;

	return;
}

/**
* Clears form data for the age section.
*
* @param none
*
* @return none
*/
void resetAge() {
	roundYoung->clear();
	roundMiddleAge->clear();
	roundOld->clear();
	roundVenerable->clear();

	clog << "Age Section Reset!" << endl;

	return;
}

/**
* Clears form data for the race section.
*
* @param none
*
* @return none
*/
void resetRace() {
	roundDwarf->clear();
	roundGnome->clear();
	roundElf->clear();
	roundHalfElf->clear();
	roundHalfOrc->clear();
	roundHalfling->clear();
	roundHuman->clear();

	clog << "Race Section Reset!" << endl;

	return;
}

/**
* Clears form data for the gender section.
*
* @param none
*
* @return none
*/
void resetGender() {
	roundMale->clear();
	roundFemale->clear();

	clog << "Gender Section Reset!" << endl;

	return;
}

/**
* Clears form data for the alignment section.
*
* @param none
*
* @return none
*/
void resetAlignment() {
	optionLawfulGood->clear();
	optionNeutralGood->clear();
	optionChaoticGood->clear();
	optionLawfulNeutral->clear();
	optionNeutral->clear();
	optionChaoticNeutral->clear();
	optionLawfulEvil->clear();
	optionNeutralEvil->clear();
	optionChaoticEvil->clear();

	clog << "Alignment Section Reset!" << endl;

	return;
}

/**
* Clears form data for the abiltiy scores section.
*
* @param none
*
* @return none
*/
void resetAbiltiyScores() {
	valueConstitution->value(0);
	valueStrength->value(0);
	valueDexterity->value(0);
	valueIntelligence->value(0);
	valueWisdom->value(0);
	valueCharisma->value(0);

	for (int i = 0; i < 6; i++) {
		abilityscoreRoll[i] = 0;
	}

	clog << "Ability Scores Section Reset!" << endl;

	return;
}

/**
* Clears form data for the class levels section.
*
* @param none
*
* @return none
*/
void resetClassLevels() {
	sliderBarbarian->value(0);
	sliderBard->value(0);
	sliderCleric->value(0);
	sliderDruid->value(0);
	sliderFighter->value(0);
	sliderMonk->value(0);
	sliderPaladin->value(0);
	sliderRanger->value(0);
	sliderRogue->value(0);
	sliderSorcerer->value(0);
	sliderWizard->value(0);

	for (int i = 0; i < 11; i++) {
		classlevelChoice[i] = 0;
	}

	clog << "Class Levels Section Reset!" << endl;

	return;
}

/**
* Clears form data for the inventory section.
*
* @param none
*
* @return none
*/
void resetInventory() {
	multilineItems->value("");

	clog << "Inventory Section Reset!" << endl;

	return;
}

/**
* Clears form data for the commands section.
*
* @param none
*
* @return none
*/
void resetCommands() {
	clog << "Commands Section Reset!" << endl;

	buttonCreateCharacterFile->deactivate();

	return;
}

/**
* Creates an output text file with the form data.
* Comunicates to the backend.
*
* @param none
*
* @return none
*/
void outputCharacter()
{
	string filename = "CHARACTER_" + nameInput + ".txt";

	ofstream outputFileStream(filename);

	character.setName(nameInput);
	character.setAge(ageChoice);
	character.setRace(raceChoice);
	character.setGender(genderChoice);
	character.setAlignmentLawfulChaotic(lawfullchaoticChoice);
	character.setAlignmentGoodEvil(goodevilChoice);
	character.setAttributes(abilityscoreRoll[0], abilityscoreRoll[1], abilityscoreRoll[2],
		abilityscoreRoll[3], abilityscoreRoll[4], abilityscoreRoll[5]);
	for (int i = 0; i < 11; i++) {
		character.setClassLevel(i, classlevelChoice[i]);
	}

	outputFileStream << character.exportAsString();


	outputFileStream << "\n Inventory: \n";
	for (auto i = itemsList.begin(); i != itemsList.end(); i++) {
		outputFileStream << "  " << *i << "\n";
	}

	outputFileStream.close();

	clog << "New character file \"CHARACTER_" << nameInput << ".txt\"!" << endl;

	return;
}
