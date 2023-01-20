#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
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

    draw_shapes(window, rectangle, circle);
    check_for_five_hundred(rectangle);
    move_rectangle(rectangle);
    move_circle(circle);
  }

  return 0;
}

void draw_shapes(sf::RenderWindow &window, sf::RectangleShape rectangle, sf::CircleShape circle)
{
  window.clear();
  window.draw(rectangle);
  window.draw(circle);
  window.display();
}

void check_for_five_hundred(sf::RectangleShape rectangle)
{
  double x_position = rectangle.getPosition().x;
  if (x_position == 500)
  {
    std::cout << "You just hit 500!\n";
  }
  else if (x_position == 1000)
  {
    std::cout << "You just hit 1000!\n";
  }
}

void move_rectangle(sf::RectangleShape &rectangle)
{
  rectangle.move(0.25, 0);
}

void move_circle(sf::CircleShape &circle)
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
  {
    circle.move(0.5, 0);
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
  {
    circle.move(-0.5, 0);
  }
}
