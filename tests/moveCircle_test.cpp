#include "../include/animations.hpp"
#include "./mockModels/mockCircleShape.hpp"

TEST(moveCircle, movesCircleRightWhenRightKeyPressed)
{
  MockCircleShape circle;

  EXPECT_CALL(circle, move(0.5, 0))
      .Times(1);
  moveCircle(circle, true);
}

TEST(moveCircle, movesCircleLeftWhenLeftKeyPressed)
{
  MockCircleShape circle;

  EXPECT_CALL(circle, move(-0.5, 0))
      .Times(1);
  moveCircle(circle, false);
}
