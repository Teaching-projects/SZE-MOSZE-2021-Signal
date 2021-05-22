/**
 * \class Words
 *
 * \brief Words class
 *
 * This is the Words class, it contains file reader and random word generator
 *
 * \version 1.0
 *
 * \author Signal team
 *
 * \date 2021/05/08 9:05
 *
 * Created on: 2021/05/08 9:05
*/
#ifndef WORDS
#define WORDS
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Words {
	std::vector<std::string> WordsList;  ///< It contains list of words
	std::string FileName;  ///< Readable filename
	std::string Word;	///< Word what it use in the game
public:
	/** \brief Words constructor
	  * \param filename
	*/
	Words(const std::string& filename);

	/** \brief Generate word
	  * \param none
	  * \return return random word from list
    */
	std::string generateWords();

	/** \brief Get string from Word variable
	  * \param none
	  * \return return word
	*/
	std::string getWord();

	/** \brief Read and get lines from the file
	  * \param filename
	  * \return return list of the words
	*/
	std::vector<std::string> getTextFromFile(const std::string& filename);
};
#endif // !WORDS
