#include "Spell.h"



Spell::Spell()
{

	name = "no name";
	description = "no description";
	level = 0;
}

Spell::Spell(std::string Name, std::string Description, int spellLevel) {
	name = Name;
	description = Description;
	level = spellLevel;
}

Spell::~Spell()
{
}

void Spell::setName(std::string newName)
{
	name = newName;
}



std::string Spell::getName() {
	return name;
}

void Spell::setDescription(std::string newDesc) {
	description = newDesc;
}
std::string Spell::getDescription() {
	return description;
}
void Spell::setLevel(int Newlevel) {
	level = Newlevel;
}

int Spell::getLevel() {
	return level;
}
