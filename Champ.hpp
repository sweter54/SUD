#ifndef CHAMP_HPP
#define CHAMP_HPP

class Inventory;


#include <iostream>
#include <string>
#include "Inventory.hpp"
#include "mob.hpp"



class Champ
{
	friend class Fight;
	friend class Items;
	friend  std::ostream& operator<<(std::ostream& out,const Champ& s);


	private:

		std::string name;
		short stun=0;
		int attack=0;
		int str=0;
		int stm=0;
		int dex=0;
		int wisd=0;
		int deff=0;
		int HP=0;
		int level=0;
		int exp=0;
		int maxExp=100;
		int itmId;

		Armour* CarriedArmour[Armour::Slot::torso];
		Armour* CarriedHelmet[Armour::Slot::head];
		Armour* CarriedShoes[Armour::Slot::legs];
		Weapon* CarriedWeapon;

		std::string guild;

	public:

		Inventory inventory;


		Champ(std::string,std::string);
		Champ(Champ&);
		~Champ();


		int rtnLVL();
		int ShowHP();
		int mExp();

		void rtnATC();
		void returnDeff();
		void returnHP();
		void KnightCr();
		void MageCr();
		void RogueCr();
		void WarriorCr();
		void HPregen();

		void equipWeapon(Weapon* weapon);
		void equipArmour(Armour* armour);
};
#endif
