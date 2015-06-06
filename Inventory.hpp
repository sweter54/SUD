#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Weapon.hpp"
#include "Armour.hpp"
#include "Item.hpp"
#include "Champ.hpp"
#include <iostream>
#include <vector>
#include <utility>

class Inventory
{
	private:



	public:

		std::vector<Item*> item;
		std::vector<Armour*> armour;
		std::vector<Weapon*> weapon;

		Inventory();
		Inventory(std::string b,std::string c,int,Armour::Slot);
		Inventory(int,int,std::string,std::string);
		Inventory(std::string,std::string);

		void print();

};
#endif
