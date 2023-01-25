#include <gmock/gmock.h>
#include "../include/animations.hpp"

class MockRenderWindow : public IRenderWindow
{
public:
  MOCK_METHOD(bool, isOpen, (), (const, override));
  MOCK_METHOD(bool, pollEvent, (sf::Event & event), (override));
  MOCK_METHOD(void, close, (), (override));
  MOCK_METHOD(void, clear, (), (override));
  MOCK_METHOD(void, draw, (const sf::Drawable &drawable), (override));
  MOCK_METHOD(void, display, (), (override));
};

TEST(drawShapes, callsDrawOnTheWindowWithShapeArguments)
{
  MockRenderWindow renderWindow;
  sf::RectangleShape rectangle;
  RectangleShapeWrapper rectangleWrapper(rectangle);
  sf::CircleShape circle;

  EXPECT_CALL(renderWindow, clear())
      .Times(1);
  EXPECT_CALL(renderWindow, draw(testing::Truly([](const sf::Drawable &drawable)
                                                { return true; })))
      .Times(2);
  EXPECT_CALL(renderWindow, display())
      .Times(1);
  drawShapes(renderWindow, rectangleWrapper, circle);
}
