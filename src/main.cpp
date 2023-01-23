#include <iostream>
#include "../include/functions.h"

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
