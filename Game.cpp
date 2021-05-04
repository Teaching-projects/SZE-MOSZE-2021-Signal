#include "Game.h"

Game::Game(std::string p1name, std::string p2name, std::string word) : Players({ Player(p1name),Player(p2name) }), Word(word) {
};

char Game::GetChar(Player p) {
	std::cout << p.getName() << " irj be egy betut a tippeleshez:";
	std::string l;
	int counter = 0;
	do
	{
		if (counter > 0) {
			std::cout << std::endl << "Hibas bemenet, kerlek probald ujra:";
		}
		std::getline(std::cin, l);
		counter++;

	} while (l.length() != 1 || !((l[0] >= 'a' && l[0] <= 'z') || (l[0] >= 'A' && l[0] <= 'Z')));

	char c = l[0];
	TypedCharacters.push_back(c);
	return c;
};
void Game::getWord() {
	std::vector<char> chars = Game::getTypedChars();
	for (const auto& word : Game::Word)
	{
		if (std::find(chars.begin(), chars.end(), word) != chars.end() || std::find(chars.begin(), chars.end(), word) != chars.end()) {
			std::cout << word << " ";
		}
		else {
			std::cout << "_" << " ";
		}
	}
}
std::vector<Player> Game::getAllPlayer() {
	return Players;
}
int Game::RemainLetter() {
	std::vector<char> chars = Game::getTypedChars();
	int counter = 0;
	for (const auto& word : Game::Word)
	{
		if (!(std::find(chars.begin(), chars.end(), word) != chars.end())) {
			counter++;
		}
	}
	return counter;
}
std::vector<char> Game::getTypedChars() {
	return Game::TypedCharacters;
}
Player& Game::getPlayerById(int i) {
	return Game::Players[i];
}