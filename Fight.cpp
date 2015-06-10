#include "mob.hpp"
#include "Fight.hpp"
#include <cstdio>

Fight::Fight(Champ* p,Mobs* e)
{
this->c=e;
this ->d=p;
}
Fight::Fight()
{

}

Fight::~Fight()
{
}

void Fight::attack()
{
	int l;

	cout<<"1.Atakuj"<<endl;
	cout<<"2. Bron sie"<<endl;
	cin >>l;
	switch(l)
	    {    case 1:
	            c->HP-=d->attack;
	            break;
	        case 2:
	            std::cout << d->name << " broni sie!\n";
	            break;
	        default:
	            break;
	    }
	return;
}

void Fight::mobAttack()
{
	std::cout<<c->name<<"Atakuje cie"<<"Krzyczac"<<c->reaction<<endl;
	std::cout<<d->name<<" Otrzymuje: "<<c->attack<<endl;

	d->HP-=c->attack;
}

void Fight::Turn()
{

	if(d->level<c->LVL)
	{
		attack();
		if(c->HP>0) mobAttack();
		else return;

	}
	else mobAttack();
	if(d->HP>0) attack();

	return;
}
bool Fight::isActive()
{
	if((c->HP>0)&&(d->HP>0))
	{
		return true;
	}
	else
	{
		printf("Ktos zostal pokonany");
		return false;
	}
}
void Fight::run()
{
	printf("Wywolano walke");

	while(isActive()!=0)
	{
		Turn();
		printf("Wywolano walke");
		if(c->HP<=0)
		{


			d->exp=c->LVL*50+20;

		}
	}
	return;
}

bool operator==(Mobs& b,Champ& c)
{
	return((c.rtnLVL()==b.rtLVL())&&(c.ShowHP()<b.ShowHP()));
}

void Fight::acquireReward(Champ& q,Mobs& w)
{
	if(*c==*d)
	{
		d->exp+=250;
	}
	q.exp=d->exp;
}
