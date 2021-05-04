#include "Words.h"

Words::Words() {};
std::string Words::getRandomWords() {
	srand(time(NULL));
	return Words::WordsList[rand() % Words::WordsList.size()];
}