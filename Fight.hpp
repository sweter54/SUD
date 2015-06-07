#ifndef FIGHT_HPP
#define FIGHT_HPP

class Champ;
class Mobs;

#include "Champ.hpp"
#include "mob.hpp"


class Fight
{

	friend bool operator>=(const Mobs&,const Champ&);

	private:

		Mobs* c;
		Champ* d;

	public:

		Fight(Champ* p,Mobs* d);
		Fight();
		~Fight();

		bool isActive();

		void run();
		void Turn();
		void attack();
		void mobAttack();

};
#endif
