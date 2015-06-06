#pragma once
#include "Champ.hpp"
#include "mob.hpp"


class Fight
{
	private:
	
	public:


		Fight(Champ& champ, Mobs& mob);
		~Fight();

		void Turn(Champ&, Mobs&);
		void Victory(Champ& c, Mobs& m);
		void Defeat(Champ&);
		void menu();
		void bestow(Champ&, Mobs&);

};
