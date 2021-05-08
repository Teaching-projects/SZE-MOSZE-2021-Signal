#include "Game.h"

Game::Game(std::string p1name, std::string p2name, std::string filename) : Players({ Player(p1name),Player(p2name) }), Word(Words(filename)) {
/// 

};

char Game::GetChar(Player p) {
	/// <summary>
	/// Returns the next character from the standard input
	/// </summary>
	

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
	} while (usedLetter(l[0]) || l.length() != 1 || !((l[0] >= 'a' && l[0] <= 'z') || (l[0] >= 'A' && l[0] <= 'Z')));

	char c = l[0];
	TypedCharacters.push_back(c);
	return c;
};
bool Game::usedLetter(char c) {
	std::vector<char> chars = Game::getTypedChars();
	if (std::find(chars.begin(), chars.end(), c) != chars.end() ||
		std::find(chars.begin(), chars.end(), c) != chars.end()) {
		return true;
	}
	return false;
}
void Game::getWord() {
	std::vector<char> chars = Game::getTypedChars();
	std::cout << std::endl << "Felhasznalt betuk: ";
	for (const auto& mychar : Game::getTypedChars()) {
		std::cout << mychar << " ";
	}
	std::cout << std::endl;

	for (const auto& word : Game::Word.getWord())
	{
		if (std::find(chars.begin(), chars.end(), word) != chars.end() || std::find(chars.begin(), chars.end(), word) != chars.end()) {
			std::cout << word << " ";
		}
		else {
			std::cout << "_" << " ";
		}
	}
	std::cout << std::endl;
}
std::vector<Player> Game::getAllPlayer() {
	return Players;
	/// Gets all the players connected to the game. 
}
int Game::RemainLetter() {
	std::vector<char> chars = Game::getTypedChars();
	int counter = 0;
	for (const auto& word : Game::Word.getWord())
	{
		if (!(std::find(chars.begin(), chars.end(), word) != chars.end())) {
			counter++;
		}
	}
	return counter;
}
std::vector<char> Game::getTypedChars() {
	return Game::TypedCharacters;
	///Returns typed characters.
}
Player& Game::getPlayerById(int i) {
	return Game::Players[i];
	///Returns a Players with a given id
}