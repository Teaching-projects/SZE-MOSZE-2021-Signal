#ifndef WORDS
#define WORDS
#include <iostream>
#include <string>
#include <vector>

class Words {
	std::vector<std::string> WordsList = { "homokfuvas", "labda", "feher", "tehen", "ablak", "agy", "telefon", "ceg" };
	std::string FileName;
public:
	Words();
	std::string getRandomWords();
};
#endif // !WORDS
