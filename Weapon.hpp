#pragma once
#include "Item.hpp"
#include <iostream>

using namespace std;

class Weapon:public Item
{
	public:

	 int damage;
	 int crit;

	public:

	int getAttack()const;
	Weapon(int,int,std::string,std::string);

};
