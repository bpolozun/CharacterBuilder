/*
* Item.cpp
*
*  Created on: Nov 29, 2017
*      Author: itcs3112-user
*/

#include "Item.h"

Item::Item() {
	itemName = "no name";
	itemDescription = "no decription";

}

Item::Item(std::string Name, std::string Description)
{
	itemName = Name;
	itemDescription = Description;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

std::string Item::getName()
{
	return itemName;
}

void Item::setName(std::string newName)
{
	itemName = newName;
}

std::string Item::getDescription()
{
	return itemDescription;
}

void Item::setDescription(std::string newDescription)
{
	itemDescription = newDescription;
}

