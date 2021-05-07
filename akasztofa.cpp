#include <iostream>
#include <vector>
#include <string>
#include "Game.h"
#include "Player.h"
#include "Words.h"
// Kital�land� szavak
// K�t j�t�kos
// 

int main()
{
	std::cout << "Akasztofa progi" << std::endl;

	Game game = Game("Jozsi", "Feri", "szavak.txt");

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