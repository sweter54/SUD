#include <cstdio>
#include "Champ.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

Champ::Champ(std::string name1 , std::string tab)
{

	CarriedArmour[Armour::Slot::torso]=nullptr;
	CarriedHelmet[Armour::Slot::head]=nullptr;
	CarriedShoes[Armour::Slot::legs]=nullptr;
	CarriedWeapon=nullptr;


	name = name1;

	if(tab.size()==7)WarriorCr();
	if(tab.size()==4)MageCr();
	if(tab.size()==5)RogueCr();

	returnHP();
	returnDeff();
	rtnATC();
}

Champ::Champ(Champ & basic) :

	str(basic.str), stm (basic.stm),
	level(basic.level), dex(basic.dex),
	wisd(basic.wisd), HP(basic.HP),
	 deff(basic.deff)
{

}

Champ::~Champ()
{

}

void Champ::MageCr()
{
	srand(time(NULL));

	level=1;

	wisd = 3+rand()%2+1;
	dex = rand()%3+1;
	str = rand()%3+1;
	stm = rand()%3+1;

	printf("Stworzono magusa\n");
}

void Champ::RogueCr()
{
	srand(time(NULL));

	level=1;

	dex = 2+rand()%2+1;
	str = rand()%3+1;
	wisd = rand()%3+1;
	stm = 1+rand()%3+1;

	printf("Stworzono Rogala\n");
}
void Champ::WarriorCr()
{
	srand(time(NULL));

	level=1;

	str = 2+rand()%2+1;
	stm = 1+rand()%3+1;
	dex = rand()%3+1;
	wisd = rand()%3+1;

	printf("Stworzono warjora\n");
}

std::ostream& operator<<(std::ostream& out,const Champ& s)
{
		out<<"Wybrana Postać: "<<s.name<<"\n"<<"Posiada: \n"<<s.exp<<"doswiadczenia\n"<<
		s.str<<" Sily\n"<<s.stm<<" wytrzymalosci\n"<<s.dex<<" Zrecznosci\n"<<s.wisd<<" Madrosci \n"<<s.deff<<" obrony \n"<<s.HP<<" Zycia\n";

		return out;
}
void Champ::equipWeapon(Weapon* weapon)
{
	this->CarriedWeapon=weapon;

}

void Champ::equipArmour(Armour* armour)
{
	if(((int)armour->slot==1))
	{
		this->CarriedArmour[(int)armour->slot]=armour;
	}
	else if(((int)armour->slot==2))
	{
		this->CarriedHelmet[(int)armour->slot]=armour;
	}
	if(((int)armour->slot==3))
	{
		this->CarriedShoes[(int)armour->slot]=armour;
	}
	else
	{
		cerr<<"Blad Przy zakladaniu pancerza";
		return;
	}
}


void Champ::returnHP()
{
	HP= 30*stm;
}

void Champ::returnDeff()
{
	deff= 3*dex;
}

int Champ::rtnLVL()
{
	return level;
}

int Champ::ShowHP()
{
	return HP;
}

int Champ::mExp()
{
	if(maxExp==exp)
	{
		level++;
		maxExp=exp*exp*64;
	}
	else return maxExp;

}
void Champ::rtnATC()
{
	attack=str*6;
}
