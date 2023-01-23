#include <SFML/Graphics.hpp>

void drawCrab(sf::RenderWindow &rWindow, const sf::Sprite &rCrabSprite);

void drawShapes(sf::RenderWindow &rWindow, const sf::RectangleShape rectangle, const sf::CircleShape circle);

void checkForFiveHundred(const sf::RectangleShape rectangle);

void moveRectangle(sf::RectangleShape &rRectangle);

void moveCircle(sf::CircleShape &rCircle);
