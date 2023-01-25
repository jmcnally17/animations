#include "../include/models/renderWindowWrapper.hpp"
#include "../include/models/rectangleShapeWrapper.hpp"

void drawShapes(IRenderWindow &rWindow, const RectangleShapeWrapper &rRectangleWrapper, const sf::CircleShape &rCircle)
{
  rWindow.clear();
  rWindow.draw(rRectangleWrapper);
  rWindow.draw(rCircle);
  rWindow.display();
}

void moveShapes(IRectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
