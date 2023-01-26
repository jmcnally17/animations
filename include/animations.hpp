#include "./models/renderWindowWrapper.hpp"
#include "./models/rectangleShapeWrapper.hpp"
#include "./models/circleShapeWrapper.hpp"

void drawShapes(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle);

void moveCircle(ICircleShape &rCircle, const bool toTheRight);

void moveRectangle(IRectangleShape &rRectangle);
