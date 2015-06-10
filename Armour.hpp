#pragma once
#include "Item.hpp"



class Armour:public Item
{
	public:

	int defense;


	public:

		enum Slot {NONE=0,torso, head, legs};

	Slot slot;

	Armour(std::string,std::string,int,Armour::Slot);

	~Armour();
};
