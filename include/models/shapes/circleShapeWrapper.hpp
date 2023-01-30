#ifndef CIRCLE_SHAPE_WRAPPER_HPP
#define CIRCLE_SHAPE_WRAPPER_HPP

#include <SFML/Graphics.hpp>
#include "./iCircleShape.hpp"

class CircleShapeWrapper : public ICircleShape, public sf::CircleShape
{
public:
  CircleShapeWrapper(sf::CircleShape circle);
  void move(float x, float y) override;
};

#endif
