#ifndef GAME
#define GAME
#include <iostream>
#include <vector>
#include <string>
#include "Player.h"
#include "Words.h"

class Game {
	std::vector<Player> Players;
	Words Word;
	std::vector<char> TypedCharacters;
public:
	Game(std::string p1name, std::string p2name, std::string filename);
	char GetChar(Player p);
	void getWord();
	Player& getPlayerById(int i);
	std::vector<Player> getAllPlayer();
	std::vector<char> getTypedChars();
	int RemainLetter();
	bool usedLetter(char c);
};
#endif // !GAME

