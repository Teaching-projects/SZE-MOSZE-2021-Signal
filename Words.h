#ifndef WORDS
#define WORDS
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Words {
	std::vector<std::string> WordsList;
	std::string FileName;
	std::string Word;
public:
	Words(std::string filename);
	std::string generateWords();
	std::string getWord();
	std::vector<std::string> getTextFromFile(std::string filename);
};
#endif // !WORDS
