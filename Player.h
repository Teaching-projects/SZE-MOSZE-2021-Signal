#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include <iostream>
class Player {
	int Point;
	const std::string Name;
	std::vector<char> TypedCharacters;

public:
	Player(const std::string name);
	const std::string getName() const;
	int getPoint() const;
	std::string getTypedCharactersAsString();
	std::vector<char> getTypedCharacters();
	void AddTypedCharacter(char c);
};

#endif // !PLAYER_H
