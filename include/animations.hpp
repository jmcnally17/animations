#ifndef ANIMATIONS_HPP
#define ANIMATIONS_HPP

#include "./models/window/iRenderWindow.hpp"
#include "./models/shapes/iRectangleShape.hpp"
#include "./models/shapes/iCircleShape.hpp"
#include "./models/audio/iSoundContainer.hpp"

void drawObjects(IRenderWindow &window, const sf::RectangleShape &rectangle, const sf::CircleShape &circle, const sf::Sprite &sprite);

void moveRectangle(IRectangleShape &rectangle);

void moveCircle(ICircleShape &circle, const bool toTheRight);

void playSound(ISoundContainer &soundContainer);

#endif
