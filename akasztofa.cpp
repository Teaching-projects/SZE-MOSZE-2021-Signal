#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include <string>
#include "Game.h"
#include "Player.h"
// Kitalálandó szavak
// Két játékos
// 

int main()
{
	std::vector<std::string> szavak = { "homokfuvas", "labda", "feher", "tehen", "ablak", "agy", "telefon", "ceg" };
	int random = rand() % szavak.size();
	std::cout << "Akasztofa progi" << std::endl;
	std::string szo = szavak[random];
	Player p1 = Player("Jozsi");
	Player p2 = Player("Feri");

	Game game = Game("Jozsi", "Feri", szo);
	//std::cout << szo << std::endl;
	std::string bemenet;
	int counter = 0;
	bool gameEnd = false;
	for (const auto& c : szo) {
		std::cout << "_" << " ";
	}
	char c;
	do
	{
		for (auto& p : game.getAllPlayer()) {
			if (game.RemainLetter() > 0) {
				std::cout << std::endl;
				game.GetChar(p);
				game.getWord();
			}
		}
		

	} while (!game.RemainLetter()==0);

	std::cout << std::endl << "Jatek vege";
}