#include "../include/models/renderWindowWrapper.hpp"
#include "../include/models/rectangleShapeWrapper.hpp"
#include "../include/models/circleShapeWrapper.hpp"

void drawShapes(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle)
{
  rWindow.clear();
  rWindow.draw(rRectangle);
  rWindow.draw(rCircle);
  rWindow.display();
}

void moveCircle(ICircleShape &rCircle, const bool toTheRight)
{
  rCircle.move(0.5, 0);
}

void moveRectangle(IRectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
