#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include <iostream>
class Player {
	int Point;
	const std::string Name;

public:
	Player(const std::string name);
	const std::string getName() const;
	int getPoint() const;
};

#endif // !PLAYER_H
