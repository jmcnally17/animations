#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/models/rectangleShapeWrapper.hpp"

void drawRectangle(sf::RenderWindow &window, const RectangleShapeWrapper &rRectangleWrapper)
{
  window.draw(rRectangleWrapper);
}

void moveRectangle(RectangleShapeWrapper &rRectangleWrapper)
{
  rRectangleWrapper.move(0.25, 0);
}
