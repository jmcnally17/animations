#include <SFML/Graphics.hpp>
#include "./iRectangleShape.hpp"

class RectangleShapeWrapper : public IRectangleShape, public sf::RectangleShape
{
public:
  RectangleShapeWrapper(sf::RectangleShape rectangle) : sf::RectangleShape::RectangleShape(rectangle) {}
  void move(float x, float y) override { sf::RectangleShape::move(x, y); }
};
