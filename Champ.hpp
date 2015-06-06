#ifndef CHAMP_HPP
#define CHAMP_HPP

class Inventory;
class Item;
class Weapon;
class Armour;

#include <iostream>
#include <string>
#include "Inventory.hpp"



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
		int MP=0;
		int HP=0;
		int level=0;


		Armour* CarriedArmour[Armour::Slot::torso];
		Armour* CarriedHelmet[Armour::Slot::head];
		Armour* CarriedShoes[Armour::Slot::legs];
		Weapon* CarriedWeapon;

		std::string guild;

	public:

		Inventory* inventory; //Wymuszony typ wskaźnikowy na klase. Prawdopodobnie ponieważ nie jest znany rozmiar klasy Inventory.


		Champ(std::string,std::string);
		Champ(Champ&);
		~Champ();

		void KnightCr();
		void MageCr();
		void RogueCr();
		void WarriorCr();

};
#endif
