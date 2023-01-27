#ifndef ANIMATIONS_HPP
#define ANIMATIONS_HPP

#include "./models/iRenderWindow.hpp"
#include "./models/iRectangleShape.hpp"
#include "./models/iCircleShape.hpp"

void drawShapes(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle);

void moveRectangle(IRectangleShape &rRectangle);

void moveCircle(ICircleShape &rCircle, const bool toTheRight);

#endif
