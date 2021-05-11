/**
 * \class Game
 *
 * \brief Game class
 *
 * This is the Game class, it contains players
 *
 * \version 1.0
 *
 * \author Signal team
 *
 * \date 2021/05/08 9:05
 *
 * Created on: 2021/05/08 9:05
*/
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include <iostream>
class Player {
	int Point; ///< It contains points of player
	const std::string Name; ///< It contains name of player

public:
	/** \brief Player constructor
      * \param name
	*/
	Player(const std::string name);

	/** \brief Get player name
	  * \param
	  * \return return string
	*/
	const std::string getName() const;

	/** \brief return point of player
	  * \param 
	  * \return return point
	*/
	int getPoint() const;
};

#endif // !PLAYER_H
