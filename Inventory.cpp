#include "Inventory.hpp"
#include <iostream>
#include <vector>

Inventory::Inventory()
{

}

void Inventory::print()
{
	std::cout<<"Posiadane pancerze to:"<<std::endl;

	for(int i=0;i<armour.size();i++)
	{
		std::cout<<armour[i]->description<<std::endl;
	}

	std::cout<<"Posiadane bronie to:"<<std::endl;

	for(int i=0;i<weapon.size();i++)
	{
		std::cout<<weapon[i]->description<<std::endl;
	}

	std::cout<<"Posiadane przedmioty to:"<<std::endl;

	for(int i=0;i<item.size();i++)
	{
		std::cout<<item[i]->description<<std::endl;
	}
}

void Inventory::add_weapon(int a,int b,std::string c,std::string d)
{

	weapon.push_back(new Weapon(a,b,c,d));

}

void Inventory::add_armour(std::string a,std::string b,int c,Armour::Slot slot)
{

	armour.push_back(new Armour(a,b,c,slot));

}

void Inventory::add_item(std::string a,std::string b)
{
	item.push_back(new Item(a,b));

}
void Inventory::rmv_weapon()
{
	int dstr;
	std::cout<<"Ktora Bron ma zostac zniszczona "<<endl;
	cin>>dstr;
	if(dstr<=weapon.size()&&(dstr>0))
	{
		weapon.erase(weapon.begin()+dstr-1);
	}
	else
	{
		cerr<<"Nie istnieje taki przedmiot"<<endl;
	}
}
void Inventory::rmv_armour()
{
	int dstr;
	std::cout<<"Ktora Bron ma zostac zniszczona "<<endl;
	cin>>dstr;
	if(dstr<=armour.size()&&(dstr>0))
	{
		armour.erase(armour.begin()+dstr-1);
	}
	else
	{
		cerr<<"Nie istnieje taki przedmiot"<<endl;
	}
}
void Inventory::rmv_item()
{
	int dstr;
	std::cout<<"Ktora Bron ma zostac zniszczona "<<endl;
	cin>>dstr;
	if(dstr<=item.size()&&(dstr>0))
	{
		item.erase(item.begin()+dstr-1);
	}
	else
	{
		cerr<<"Nie istnieje taki przedmiot"<<endl;
	}
}
