#include <iostream>
#include <SFML/Graphics.hpp>

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
    if (rectangle.getPosition().x == 1000)
      std::cout << "You just hit 1000!\n";
  }

  return 0;
}
