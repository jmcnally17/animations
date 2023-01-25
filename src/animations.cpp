#include "../include/animations.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(1536, 1344), "Rectangle");

  sf::RectangleShape rectangle(sf::Vector2f(100, 500));
  RectangleShapeWrapper rectangleWrapper(rectangle);
  rectangleWrapper.setFillColor(sf::Color::Green);
  rectangleWrapper.setPosition(50, 50);

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
    drawRectangle(window, rectangleWrapper);
    window.display();

    moveRectangle(rectangleWrapper);
  }

  return 0;
}
