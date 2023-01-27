#include "../../include/animations.hpp"
#include "../mockModels/mockRenderWindow.hpp"

TEST(drawShapes, callsDrawOnTheWindowWithShapeArguments)
{
  MockRenderWindow renderWindow;
  sf::RectangleShape rectangle;
  sf::CircleShape circle;

  EXPECT_CALL(renderWindow, clear())
      .Times(1);
  EXPECT_CALL(renderWindow, draw(testing::Truly([](const sf::Drawable &drawable)
                                                { return true; })))
      .Times(2);
  EXPECT_CALL(renderWindow, display())
      .Times(1);
  drawShapes(renderWindow, rectangle, circle);
}
