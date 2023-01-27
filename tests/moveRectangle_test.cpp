#include "../include/animations.hpp"
#include "./mockModels/mockRectangleShape.hpp"

TEST(moveRectangle, callsMoveOnRectangle)
{
  MockRectangleShape rectangle;

  EXPECT_CALL(rectangle, move(0.25, 0))
      .Times(1);
  moveRectangle(rectangle);
}
