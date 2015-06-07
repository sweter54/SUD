#include "mob.hpp"

Mobs::Mobs(std::string s, std::string s2,int a,int b,int c,int d,int e):reaction(s2),name(s), HP(a), deff(b),attack(c),ItemId(d),LVL(e)
{

}
Mobs::~Mobs()
{

}
std::ostream& operator<<(std::ostream& out,const Mobs& s)
{
		out<<"Na twojej drodze stanal: "<<s.name<<"\n"<<"o poziomie"<<s.LVL<<"\n"<<"Zwraca sie do ciebie"<<s.reaction;

		return out;
}
int Mobs::ShowHP()
{
	return HP;
}
int Mobs::rtLVL()
{
	return LVL;
}
