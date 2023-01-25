#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/models/rectangleShapeWrapper.hpp"

void drawRectangle(sf::RenderWindow &window, const RectangleShapeWrapper &rRectangleWrapper)
{
  window.draw(rRectangleWrapper);
}

void moveRectangle(IRectangleShape &rRectangle)
{
  rRectangle.move(0.25, 0);
}
