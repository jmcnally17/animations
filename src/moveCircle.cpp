#include "../include/models/iCircleShape.hpp"

void moveCircle(ICircleShape &rCircle, const bool toTheRight)
{
  if (toTheRight)
  {
    rCircle.move(0.5, 0);
  }
  else
  {
    rCircle.move(-0.5, 0);
  }
}
