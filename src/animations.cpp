#include "../include/animations.hpp"

int main()
{
  RenderWindowWrapper window(sf::VideoMode(1536, 1344), "Animations");

  sf::RectangleShape rectangle(sf::Vector2f(100, 500));
  RectangleShapeWrapper rectangleWrapper(rectangle);
  rectangleWrapper.setFillColor(sf::Color::Green);
  rectangleWrapper.setPosition(50, 50);

  sf::CircleShape circle(50);
  CircleShapeWrapper circleWrapper(circle);
  circleWrapper.setFillColor(sf::Color::Red);
  circleWrapper.setPosition(1400, 1200);

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

    drawShapes(window, rectangleWrapper, circleWrapper);
    moveRectangle(rectangleWrapper);
  }

  return 0;
}
