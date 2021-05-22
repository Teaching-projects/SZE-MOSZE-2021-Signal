#include "Player.h"
Player::Player(std::string name) : Name(name),Point(0) {};

const std::string Player::getName() const {
	return Player::Name;
}
int Player::getPoint() const{
	return Player::Point;
}