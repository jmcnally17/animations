#ifndef MOCK_RECTANGLE_SHAPE_HPP
#define MOCK_RECTANGLE_SHAPE_HPP

#include <gmock/gmock.h>
#include "../../include/models/shapes/iRectangleShape.hpp"

class MockRectangleShape : public IRectangleShape
{
public:
  MOCK_METHOD(void, move, (float x, float y), (override));
};

#endif
