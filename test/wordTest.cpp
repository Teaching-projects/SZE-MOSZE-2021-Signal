#include <gtest/gtest.h>
#include "../Words.h"
#include <iostream>
#include <map>
#include <string>

TEST(Words, getWordTest) {

	std::string example = "apple";

	Words p = Words("testszo.txt");

	ASSERT_EQ(example, p.getWord());
};
TEST(Words, getTextFromFileTest) {

	std::vector<std::string> example = { "apple" };

	Words p = Words("testszo.txt");

	std::vector<std::string> res = p.getTextFromFile("testszo.txt");

	ASSERT_EQ(example, res);
};
TEST(Words, generateWordsTest) {

	std::string example = "apple";

	Words p = Words("testszo.txt");

	ASSERT_EQ(example, p.generateWords());
};


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}