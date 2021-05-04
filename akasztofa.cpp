#include <iostream>
#include <vector>

#include <string>
#include "Game.h"
#include "Player.h"
#include "Words.h"
// Kitalálandó szavak
// Két játékos
// 

int main()
{
	Words words = Words();
	std::cout << "Akasztofa progi" << std::endl;
	std::string szo = words.getRandomWords();
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