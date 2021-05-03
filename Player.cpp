#include "Player.h"
Player::Player(const std::string name) : Name(name),Point(0) {};

const std::string Player::getName() const {
	return Player::Name;
}
int Player::getPoint() const{
	return Player::Point;
}
std::string Player::getTypedCharactersAsString() {
	std::string s = "";
	for (const auto& p : Player::TypedCharacters) {
		s =s+ p + " ";
	}
	return s;
}
std::vector<char> Player::getTypedCharacters() {
	return Player::TypedCharacters;
}
void Player::AddTypedCharacter(char c) {
	Player::TypedCharacters.push_back(c);
}