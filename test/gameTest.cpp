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
TEST(Game, RemainLetterTest) {

	int example = 5;

	Game p = Game("Jozsi", "Feri", "testszo.txt");

	ASSERT_EQ(example, p.RemainLetter());
};

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}