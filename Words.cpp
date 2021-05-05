#include "Words.h"

Words::Words(std::string filename):WordsList(getTextFromFile(filename)) {
	Word = generateWords();
};
std::string Words::generateWords() {
	srand(time(NULL));
	return Words::WordsList[rand() % Words::WordsList.size()];
}
std::string Words::getWord() {
	return Words::Word;
}
std::vector<std::string> Words::getTextFromFile(std::string filename) {
	std::ifstream ReadFile(filename);
	std::vector<std::string> txt;
	std::string line;
	while (getline(ReadFile, line)) {
		txt.push_back(line);
	}
	ReadFile.close();
	return txt;
}