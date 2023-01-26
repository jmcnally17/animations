#include <gmock/gmock.h>
#include "../include/animations.hpp"

class MockRectangleShape : public IRectangleShape
{
public:
  MOCK_METHOD(void, move, (float x, float y), (override));
};

TEST(moveShapes, callsMoveOnRectangle)
{
  MockRectangleShape rectangle;

  EXPECT_CALL(rectangle, move(0.25, 0))
      .Times(1);
  moveRectangle(rectangle);
}
