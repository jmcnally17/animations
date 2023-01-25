#include <gmock/gmock.h>
#include "../include/functions.hpp"

class MockRectangleShape : public IRectangleShape
{
public:
  MOCK_METHOD(void, move, (float x, float y), (override));
};

TEST(moveRectangle, callsMoveOnRectangle)
{
  MockRectangleShape rectangle;

  EXPECT_CALL(rectangle, move(0.25, 0))
      .Times(1);
  moveRectangle(rectangle);
}
