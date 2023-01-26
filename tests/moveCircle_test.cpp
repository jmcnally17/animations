#include <gmock/gmock.h>
#include "../include/animations.hpp"

class MockCircleShape : public ICircleShape
{
public:
  MOCK_METHOD(void, move, (float x, float y), (override));
};

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
