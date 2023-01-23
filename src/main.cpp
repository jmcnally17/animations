#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "../include/main.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(1536, 1344), "Rectangle");

  sf::RectangleShape rectangle(sf::Vector2f(100, 500));
  rectangle.setFillColor(sf::Color::Green);
  rectangle.setPosition(50, 75);

  sf::CircleShape circle(100, 40);
  circle.setFillColor(sf::Color::Red);
  circle.setPosition(50, 1100);

  sf::Texture crabTexture;
  if (!crabTexture.loadFromFile("images/crab.png"))
  {
    std::cout << "Couldn't load crab image!\n";
  }
  sf::Sprite crabSprite;
  crabSprite.setPosition(1000, 700);
  crabSprite.setTexture(crabTexture);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
      {
        window.close();
      }
    }

    window.clear();
    drawCrab(window, crabSprite);
    drawShapes(window, rectangle, circle);
    window.display();

    checkForFiveHundred(rectangle);
    moveRectangle(rectangle);
    moveCircle(circle);
  }

  return 0;
}

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
