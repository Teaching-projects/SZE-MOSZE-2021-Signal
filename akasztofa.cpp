#include <iostream>
#include <vector>

#include <string>
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
	//std::cout << szo << std::endl;
	std::string bemenet;
	int counter = 0;
	bool gameEnd = false;
	for (const auto& c : szo) {
		std::cout << "_" << " ";
	}
	do
	{
		std::cout << std::endl;

		std::cout << p1.getName() << " irj be egy betut a tippeleshez:";
		std::cin >> bemenet;
		p1.AddTypedCharacter(bemenet[0]);
		counter = 0;
		for (const auto& c : szo) {
			std::vector<char> c1 = p1.getTypedCharacters();
			std::vector<char> c2 = p2.getTypedCharacters();
			if (std::find(c1.begin(), c1.end(), c) != c1.end() || std::find(c2.begin(), c2.end(), c) != c2.end()) {
				std::cout << c << " ";
			}
			else {
				counter++;
				std::cout << "_" << " ";
			}
		}
		if (counter > 0) {
			std::cout << std::endl << p2.getName() << " irj be egy betut a tippeleshez:";
			std::cin >> bemenet;
			p2.AddTypedCharacter(bemenet[0]);

			//std::cout << p1.getTypedCharactersAsString() << std::endl << p2.getTypedCharactersAsString() << std::endl;
			counter = 0;
			for (const auto& c : szo) {
				std::vector<char> c1 = p1.getTypedCharacters();
				std::vector<char> c2 = p2.getTypedCharacters();
				if (std::find(c1.begin(), c1.end(), c) != c1.end() || std::find(c2.begin(), c2.end(), c) != c2.end()) {
					std::cout << c << " ";
				}
				else {
					counter++;
					std::cout << "_" << " ";
				}
			}
		}

		if (counter == 0) {
			gameEnd = true;
		}
	} while (!gameEnd);

	std::cout << std::endl << "Jatek vege";
}