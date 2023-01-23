#include <gtest/gtest.h>
#include "../include/functions.h"

namespace
{
  TEST(MoveRectangle, AddsQuarterToXPosition)
  {
    sf::RectangleShape rectangle(sf::Vector2f(10, 10));
    rectangle.setPosition(50, 50);
    moveRectangle(rectangle);

    double XPosition = rectangle.getPosition().x;
    EXPECT_EQ(XPosition, 50.25);
  }
}
