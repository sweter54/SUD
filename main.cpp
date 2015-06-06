#include <cstdio>
#include "Champ.hpp"
#include "Item.hpp"
#include "Armour.hpp"
#include "Fight.hpp"
#include "Inventory.hpp"
#include "mob.hpp"
#include <iostream>
#include <vector>

int main()
{

	printf("\n \n \t \t Witaj w prymitywnym symutalorze gry RPG. Na razie to prototyp\n \t \t utworzony w celach zwiekszenia wiedzy. \n");
	printf("\t\t Dlatego czuj sie swobodnie w testowaniu\n\t\t tego projektu  oraz prosze uzbroj sie w cierpliwosc. :)\n\n");

	int chc;
	int chr;

	std::string name;
	std::string clas;
	printf("Jesli chcesz zagrac wcisnij 1 ");

	scanf("%d",&chc);
	printf("Podaj imie postaci");
	cin>>name;
	if(chc==1)
	{
		printf("Podaj klase, ktora chcesz zagrac \n");

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

			Player.inventory->print();

			scanf("%d",&chr);



		}while(chr==0);


	}

	else
	{
		goto koniec;
	}

	koniec:
	return 0;

}
