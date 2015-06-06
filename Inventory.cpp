#include "Inventory.hpp"
#include <iostream>
#include <vector>

Inventory::Inventory()
{

}

Inventory::Inventory(std::string a,std::string b)
{
	item.push_back(new Item(a,b));

}
Inventory::Inventory(std::string a,std::string b,int c,Armour::Slot slot)
{
	armour.push_back(new Armour(a,b,c,slot));

}
Inventory::Inventory(int a,int b,std::string c,std::string d)
{
	weapon.push_back(new Weapon(a,b,c,d));

}


void Inventory::print()
{
	std::cout<<"Posiadane pancerze to:"<<std::endl;

	for(int i=0;i<armour.size();i++)
	{
		std::cout<<armour[i]->description<<std::endl;
	}

	std::cout<<"Posiadane bronie to:"<<std::endl;

	for(int i=0;i<weapon.size();i++)
	{
		std::cout<<weapon[i]->description<<std::endl;
	}

	std::cout<<"Posiadane przedmioty to:"<<std::endl;

	for(int i=0;i<item.size();i++)
	{
		std::cout<<item[i]->description<<std::endl;
	}
}
