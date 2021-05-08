#include <gtest/gtest.h>
#include "../Player.h"
#include <iostream>
#include <map>
#include <string>

TEST(Player, getNameTest) {

	std::string example = "Jozsi";

	Player p = new Player("Jozsi");

	ASSERT_EQ(example, p.getName());
};
TEST(Player, getPointTest) {

	int example = 0;

	Player p = new Player("Jozsi");

	ASSERT_EQ(example, p.getPoint());
};


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}