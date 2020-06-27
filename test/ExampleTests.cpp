#include <gtest/gtest.h>
#include "../Example.hpp"

TEST(ExampleTests, MacTest)
{
    int x = 42;
    int y = 16;
    int sum = 100;

    EXPECT_EQ(
        sum + x * y,
        MAC(x, y, sum)
    );
}

TEST(ExampleTests, SquareTest)
{
    int x = 9;
    int expectedSquare = 81;

    EXPECT_EQ(expectedSquare, Square(x));
}