#include "../include/models/rectangleShapeWrapper.hpp"

void drawRectangle(sf::RenderWindow &rWindow, const RectangleShapeWrapper &rRectangleWrapper)
{
  rWindow.draw(rRectangleWrapper);
}

void moveRectangle(IRectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
