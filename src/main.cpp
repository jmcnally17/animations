#include <SFML/Graphics.hpp>
#include <iostream>
#include "../include/main.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(1536, 1344), "Rectangle");
  sf::RectangleShape rectangle(sf::Vector2f(100, 500));
  rectangle.setFillColor(sf::Color::Green);
  rectangle.setPosition(50, 75);

  std::cout << rectangle.getPosition().x << ", " << rectangle.getPosition().y << "\n";

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    window.clear();
    window.draw(rectangle);
    window.display();
    rectangle.move(0.5, 0);
    check_for_thousand(rectangle);
  }

  return 0;
}
