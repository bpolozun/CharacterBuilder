
/*
* Item.h
*
*  Created on: Nov 29, 2017
*      Author: itcs3112-user
*/

#ifndef ITEM_H_
#define ITEM_H_
#include <string>
class Item {

private:
	std::string itemName;
	std::string itemDescription;
public:
	Item();
	virtual ~Item();

	std::string getName();
	void setName(std::string newName);
	std::string getDescription();
	void setDescription(std::string newDescription);

};

#endif /* ITEM_H_ */
