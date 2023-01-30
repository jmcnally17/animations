#ifndef ANIMATIONS_HPP
#define ANIMATIONS_HPP

#include "./models/window/iRenderWindow.hpp"
#include "./models/shapes/iRectangleShape.hpp"
#include "./models/shapes/iCircleShape.hpp"
#include "./models/audio/iSoundContainer.hpp"

void drawObjects(IRenderWindow &rWindow, const sf::RectangleShape &rRectangle, const sf::CircleShape &rCircle, const sf::Sprite &rSprite);

void moveRectangle(IRectangleShape &rRectangle);

void moveCircle(ICircleShape &rCircle, const bool toTheRight);

void playSound(ISoundContainer &rSoundContainer);

#endif
