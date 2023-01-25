#include "../include/models/renderWindowWrapper.hpp"
#include "../include/models/rectangleShapeWrapper.hpp"

void drawShapes(IRenderWindow &rWindow, const RectangleShapeWrapper &rRectangleWrapper)
{
  rWindow.clear();
  rWindow.draw(rRectangleWrapper);
  rWindow.display();
}

void moveRectangle(IRectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
