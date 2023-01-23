#include <SFML/Graphics.hpp>

void drawCrab(sf::RenderWindow &rWindow, sf::Sprite &rCrabSprite);

void drawShapes(sf::RenderWindow &rWindow, sf::RectangleShape rectangle, sf::CircleShape circle);

void checkForFiveHundred(sf::RectangleShape rectangle);

void moveRectangle(sf::RectangleShape &rRectangle);

void moveCircle(sf::CircleShape &rCircle);
