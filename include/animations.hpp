#ifndef ANIMATIONS_HPP
#define ANIMATIONS_HPP

#include "./models/iRenderWindow.hpp"
#include "./models/iRectangleShape.hpp"
#include "./models/iCircleShape.hpp"
#include "./models/iSound.hpp"

void drawObjects(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle, const sf::Sprite &rSprite);

void moveRectangle(IRectangleShape &rRectangle);

void moveCircle(ICircleShape &rCircle, const bool toTheRight);

void playSound(ISound &rSound);

#endif
