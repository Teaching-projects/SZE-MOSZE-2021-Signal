#ifndef GAME
#define GAME
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

class Game {
	std::vector<Player> Players;
	std::string Word;
	std::vector<char> TypedCharacters;
public:
	Game(std::string p1name, std::string p2name, std::string word);
	char GetChar(Player p);
	void getWord();
	Player& getPlayerById(int i);
	std::vector<Player> getAllPlayer();
	std::vector<char> getTypedChars();
	int RemainLetter();
};
#endif // !GAME

