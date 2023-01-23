#include <SFML/Graphics.hpp>

void drawShapes(sf::RenderWindow &window, sf::RectangleShape rectangle, sf::CircleShape);

void drawCrab(sf::RenderWindow &window, sf::Sprite crabSprite);

void checkForFiveHundred(sf::RectangleShape rectangle);

void moveRectangle(sf::RectangleShape &rectangle);

void moveCircle(sf::CircleShape &circle);
