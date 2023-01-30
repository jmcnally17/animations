#include "../include/models/window/iRenderWindow.hpp"

void drawObjects(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle, const sf::Sprite &rSprite)
{
  rWindow.clear();
  rWindow.draw(rRectangle);
  rWindow.draw(rCircle);
  rWindow.draw(rSprite);
  rWindow.display();
}
