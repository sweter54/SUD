#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Weapon.hpp"
#include "Armour.hpp"
#include "Item.hpp"
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


		void add_weapon(int,int,std::string,std::string);
		void add_armour(std::string,std::string,int,Armour::Slot);
		void add_item(std::string,std::string);

		void rmv_weapon();
		void rmv_armour();
		void rmv_item();

		void print();

};
#endif
