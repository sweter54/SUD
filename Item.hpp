#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>


class Item
{
	friend class Inventory;

private:

		std::string description;
		std::string name;



	public:

		Item(std::string, std::string);
		~Item();




};
#endif
