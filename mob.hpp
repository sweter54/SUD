#pragma once
#include <iostream>

class Mobs
{
	friend class Fight;
	friend class Items;
	friend std::ostream& operator<<(std::ostream& out, Mobs s);

	private:

		int stun;
		int attack;
		int deff;
		int MP;
		int HP;
		int ItemId;

	public:

		void Skeleton();
		void Lurker();
};
