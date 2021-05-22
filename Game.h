/**
 * \class Game
 *
 * \brief Game class
 *
 * This is the Game class, it is control all game
 *
 * \version 1.0
 *
 * \author Signal team
 *
 * \date 2021/05/08 9:05
 *
 * Created on: 2021/05/08 9:05
*/
#ifndef GAME
#define GAME
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Player.h"
#include "Words.h"

class Game {
	std::vector<Player> Players;	///< It contains list of player
	Words Word;						///< It contains words class 
	std::vector<char> TypedCharacters;	///< It contains list of typed characters
public:
	/** \brief Game constructor
	  * \param p1name, p2name, filename
	*/
	Game(std::string p1name, std::string p2name, std::string filename);

	/** \brief enable input for players
	  * \param player
	  * \return return typed char
	*/
	char GetChar(Player p);

	/** \brief Print placeholders and find characters
	  * \param none
	  * \return none
	*/
	void getWord();

	/** \brief return player by id
	  * \param id
	  * \return return player
	*/
	Player& getPlayerById(int i);

	/** \brief return all player
	  * \param none
	  * \return return list of player
	*/
	std::vector<Player> getAllPlayer();

	/** \brief return typed charachters
	  * \param none
	  * \return return list of charachters
	*/
	std::vector<char> getTypedChars();

	/** \brief return remain letters count
	  * \param no
	  * \return count of remain letters
	*/
	int RemainLetter();

	/** \brief check if char used or not
	  * \param char
	  * \return return true or false
	*/
	bool usedLetter(char c);
};
#endif // !GAME

