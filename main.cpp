#include <cstdio>
#include <iostream>
#include <vector>

#include "Champ.hpp"
#include "Item.hpp"
#include "Armour.hpp"
#include "Fight.hpp"
#include "Inventory.hpp"
#include "mob.hpp"
#include "Dungeons.hpp"

void MenuADV(Champ&,Dungeons&);
void MenuINV();


int main()
{

	printf("\n \n \t \t Witaj w prymitywnym symutalorze gry RPG. Na razie to prototyp\n \t \t utworzony w celach zwiekszenia wiedzy. \n");
	printf("\t\t Dlatego czuj sie swobodnie w testowaniu\n\t\t tego projektu  oraz prosze uzbroj sie w cierpliwosc. :)\n\n");

	int chc;
	int chr;
	int adv;
	int chinv;
	int n;
	int dng;

	std::string name;
	std::string clas;
	printf("Jesli chcesz zagrac wcisnij 1 ");

	scanf("%d",&chc);
	printf("Podaj imie postaci");
	cin>>name;
	if(chc==1)
	{
		printf("Podaj klase, ktora chcesz zagrac \n");

		Dungeons loch1("Piwnice PWr","Lochy z ktorych nie ma ucieczki",1);
		loch1.add_mobs("trololo","Sprzatacz",120,1,2,10,5);
		loch1.add_mobs("trololo","Sprzatacz2",50,3,4,1,1);
		loch1.add_mobs("trololo","Sprzatacz3",40,3,4,1,4);
		loch1.add_mobs("trololo","Sprzatacz4",120,3,4,1,2);
		loch1.rmv_mobs();
		cin>>clas;

		Champ Player(name,clas);
		cout<<"Pomyslnie utworzono postac."<<Player;
		cout<<"Wybierz co chcesz zrobic"<<endl;
		do
		{


			printf("1. aby zobaczyc ekwipunek.\n");
			printf("2. aby kontynuwac podroz.\n");
			printf("3. aby zobaczyc statystyki postaci\n");
			printf("7. aby wyjsc z gry\n");

			scanf("%d",&chr);





			switch(chr)
			{
				case 1:
					Player.inventory.print();
					MenuINV();
					cin>>chinv;

					switch(chinv)
					{
						case 1:
							cin>>n;
							Player.equipWeapon(Player.inventory.weapon[n-1]);

							break;

						case 2:
							cin>>n;
							Player.equipArmour(Player.inventory.armour[n-1]);

							break;

						case 3:
							Player.inventory.rmv_weapon();

							break;

						case 4:
							Player.inventory.rmv_armour();

							break;

						default:

							break;
					}

					break;

				case 2:
				while(loch1.mobs.size())
				{
					int i=1;
					Fight(&Player,loch1.mobs[1]).run();
					loch1.mobs.erase(loch1.mobs.begin());
					i++;
				}

					break;
				case 3:
				cout<<Player;

					break;

				default:

					break;
			}

			/*

			Player.inventory.add_weapon(12,12,"s","Palka Zagladyyyyyy...");
			Player.inventory.add_weapon(12,12,"s","Wielki Miecz Wojownika Teczy");
			Player.inventory.add_weapon(12,12,"s","Grodzka Zyleta");
			Player.inventory.add_armour("Zbroja","Pancernik",12,Armour::Slot::torso);
			Player.equipWeapon(Player.inventory.weapon[123]);

			*/


		}while(chr!=0);



	}

	else
	{
		goto koniec;
	}

	koniec:
	return 0;

}


void MenuADV(Champ& Champ,Dungeons& d)
{
	if(Champ.rtnLVL()<6)
	{
		printf("Jako poczatkujacy poszukiwacz przygod natrafiles na karczme na obrzerzach miasta\n");
		printf("Niewielu jest gotowych zlecic jakakolwiek prace, lecz po pewnym czasie spotykasz starca\n");
		printf("ktory prosi cie o wykonanie zadania:");

	}
	else if((Champ.rtnLVL()>5)&&(Champ.rtnLVL()<11))
	{
		printf("Wchodzisz do karczmy, aby przyjac kolejne zlecenie. Na tablicy oglaszen widzisz nastepujace pozycje\n");
	}
	else if(Champ.rtnLVL()>10)
	{
		printf("Wracajac z ostatniej wyprawy, zagaduje do ciebie barman. Okazuje sie ze ktos ma dla ciebie zlecenie\n");
	}
	d.rtName();
}
void MenuINV()
{
	printf("\nWcisnik 1 aby zalozyc bron, po czym podaj nr przedmiotu\n");
	printf("Wcisnik 2 aby zalozyc helm, po czym podaj nr przedmiotu\n");
	printf("Wcisnik 3 aby wyrzucic bron, po czym podaj nr przedmiotu\n");
	printf("Wcisnik 4 aby wyrzucic pancerz, po czym podaj nr przedmiotu\n");
}
