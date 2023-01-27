#include "../../include/models/iRenderWindow.hpp"

void drawShapes(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle)
{
  rWindow.clear();
  rWindow.draw(rRectangle);
  rWindow.draw(rCircle);
  rWindow.display();
}
