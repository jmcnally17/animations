#ifndef RECTANGLE_SHAPE_WRAPPER_HPP
#define RECTANGLE_SHAPE_WRAPPER_HPP

#include <SFML/Graphics.hpp>
#include "./iRectangleShape.hpp"

class RectangleShapeWrapper : public IRectangleShape, public sf::RectangleShape
{
public:
  RectangleShapeWrapper(sf::RectangleShape rectangle);
  void move(float x, float y) override;
};

#endif
