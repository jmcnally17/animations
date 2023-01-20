#include <SFML/Graphics.hpp>
#include <iostream>

void check_for_thousand(sf::RectangleShape rectangle)
{
  if (rectangle.getPosition().x == 1000)
    std::cout << "You just hit 1000!\n";
}
