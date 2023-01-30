#include "../include/models/window/iRenderWindow.hpp"

void drawObjects(IRenderWindow &window, const sf::RectangleShape &rectangle, const sf::CircleShape &circle, const sf::Sprite &sprite)
{
  window.clear();
  window.draw(rectangle);
  window.draw(circle);
  window.draw(sprite);
  window.display();
}
