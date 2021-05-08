#include <gtest/gtest.h>
#include "../Game.h"
#include "../Player.h"
#include <iostream>
#include <map>
#include <string>

TEST(Game, usedLetterTest) {

	bool example = false;

	Game p = Game("Jozsi","Feri","testszo.txt");

	ASSERT_EQ(example, p.usedLetter('a'));
};
TEST(Game, getWordTest) {

	std::string example = "_ _ _ _ _ ";

	Game p = Game("Jozsi", "Feri", "testszo.txt");

	ASSERT_EQ(example, p.getWord());
};
TEST(Game, getAllPlayerTest) {

	std::vector<Player> example = {Player("Jozsi"),Player("Feri")};

	Game p = Game("Jozsi", "Feri", "testszo.txt");

	ASSERT_EQ(example, p.getAllPlayer());
};
TEST(Game, RemainLetterTest) {

	int example = 5;

	Game p = Game("Jozsi", "Feri", "testszo.txt");

	ASSERT_EQ(example, p.RemainLetter());
};
TEST(Game, getTypedCharTest) {

	std::vector<char> example = {};

	Game p = Game("Jozsi", "Feri", "testszo.txt");

	ASSERT_EQ(example, p.getTypedChars());
};

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}