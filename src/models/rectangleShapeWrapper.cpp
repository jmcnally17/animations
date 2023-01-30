#include "../../include/models/shapes/rectangleShapeWrapper.hpp"

RectangleShapeWrapper::RectangleShapeWrapper(sf::RectangleShape rectangle) : sf::RectangleShape::RectangleShape(rectangle) {}

void RectangleShapeWrapper::move(float x, float y)
{
  sf::RectangleShape::move(x, y);
}
