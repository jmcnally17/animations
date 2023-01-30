#include "../../include/models/shapes/circleShapeWrapper.hpp"

CircleShapeWrapper::CircleShapeWrapper(sf::CircleShape circle) : sf::CircleShape::CircleShape(circle) {}

void CircleShapeWrapper::move(float x, float y)
{
  sf::CircleShape::move(x, y);
}
