#pragma once
#include <string>
class Spell
{

private:
	int level;
	std::string name;
	std::string description;
public:
	Spell();
	Spell(std::string Name, std::string Description, int spellLevel);
	~Spell();
	void setName(std::string newName);
	std::string getName();
	void setDescription(std::string newDesc);
	std::string getDescription();
	void setLevel(int Newlevel);
	int getLevel();
};

