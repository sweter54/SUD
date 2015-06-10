#ifndef FIGHT_HPP
#define FIGHT_HPP

class Champ;
class Mobs;

#include "Champ.hpp"
#include "mob.hpp"


class Fight
{

	friend bool operator==(Mobs& b,Champ& c);

	private:

		Mobs* c;
		Champ* d;

	public:

		Fight(Champ* p,Mobs* d);
		Fight();
		~Fight();

		bool isActive();

		void acquireReward(Champ& b,Mobs& d);
		void run();
		void Turn();
		void attack();
		void mobAttack();


};
#endif
