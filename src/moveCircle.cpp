#include "../include/models/shapes/iCircleShape.hpp"

void moveCircle(ICircleShape &circle, const bool toTheRight)
{
  if (toTheRight)
  {
    circle.move(0.5, 0);
  }
  else
  {
    circle.move(-0.5, 0);
  }
}
