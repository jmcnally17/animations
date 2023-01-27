#include "../../include/drawShapes.hpp"
#include "../mockModels/mockRenderWindow.hpp"

TEST(drawRectangle, callsDrawOnWindowWithRectangleArgument)
{
  MockRenderWindow window;
  sf::RectangleShape rectangle;

  EXPECT_CALL(window, draw(testing::Truly([](const sf::Drawable &drawable)
                                          { return true; })))
      .Times(1);
  drawRectangle(window, rectangle);
}
