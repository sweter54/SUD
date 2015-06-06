#include "mob.hpp"
#include "Fight.hpp"
#include <cstdio>

Fight::Fight( Champ& champ, Mobs& mob)
{	
	char pick;

	do
	{	
		menu();
		scanf("%c",&pick);
	
	

	}while(pick != 'E');
}

void Fight::Turn(Champ& champ, Mobs& mob)
{
	if((champ.HP!=0)&&(mob.HP!=0))
	{
		if(champ.stun==0)
	{
		champ.HP=champ.HP-mob.attack+champ.deff;
	}	
	if(mob.stun==0)
	{
		mob.HP=mob.HP-champ.attack;
	}

		return Turn(champ, mob);
	}
	else if((champ.HP==0)&&(mob.HP!=0))
	{
		Defeat(champ);
	}
	else if((champ.HP!=0)&&(mob.HP==0))
	{
		Victory(champ,mob);
		
	}
	else printf("Wewnetrzny blad");

}

void Fight::Victory(Champ& c, Mobs& m)
{
	printf("Wygrales");

	bestow(c,m);
}
void Fight::Defeat(Champ& c)
{
	printf("Przegrales. Spróbuj Ponownie.");

	c.HP=15;
	c.MP=20;
	
}
void Fight::bestow(Champ& champ, Mobs& mob)
{
	int *wskItm;
	wskItm=&mob.ItemId;

}
void Fight::menu()
{
	printf("\nWidzisz Przeciwnika na horyzoncie,	co 	chcesz zrobic?");
	printf("\n 1.Podjac Walke <F>");
	printf("\n 2.Uciec <E> \n");

}
