#pragma once
#include <iostream>
#include "Champ.hpp"

class Mobs
{
	friend class Fight;
	friend class Items;
	friend std::ostream& operator<<(std::ostream& out,const Mobs& s);

	private:

		std::string reaction;
		std::string name;
		int stun;
		int attack;
		int deff;
		int HP;
		int ItemId;
		int LVL;

	public:

		Mobs();
		Mobs(std::string,std::string,int,int,int,int,int);
		~Mobs();

		int ShowHP();
		int rtLVL();

};
