#include <iostream>
#include <SFML/Graphics.hpp>

void drawRectangle(sf::RenderWindow &window, const sf::RectangleShape &rRectangle)
{
  window.draw(rRectangle);
}

void moveRectangle(sf::RectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
