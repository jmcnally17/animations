#include <iostream>
#include <SFML/Graphics.hpp>

void drawCrab(sf::RenderWindow &window, const sf::Sprite &rCrabSprite)
{
  window.draw(rCrabSprite);
}

void drawShapes(sf::RenderWindow &window, const sf::RectangleShape rectangle, const sf::CircleShape circle)
{
  window.draw(rectangle);
  window.draw(circle);
}

void checkForFiveHundred(const sf::RectangleShape rectangle)
{
  double xPosition = rectangle.getPosition().x;
  if (xPosition == 500)
  {
    std::cout << "You just hit 500!\n";
  }
  else if (xPosition == 1000)
  {
    std::cout << "You just hit 1000!\n";
  }
}

void moveRectangle(sf::RectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}

void moveCircle(sf::CircleShape &rCircle)
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
  {
    rCircle.move(0.5, 0);
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
  {
    rCircle.move(-0.5, 0);
  }
}
