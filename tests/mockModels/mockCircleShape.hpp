#ifndef MOCK_CIRCLE_SHAPE_HPP
#define MOCK_CIRCLE_SHAPE_HPP

#include <gmock/gmock.h>
#include "../../include/models/shapes/iCircleShape.hpp"

class MockCircleShape : public ICircleShape
{
public:
  MOCK_METHOD(void, move, (float x, float y), (override));
};

#endif
