#include <SFML/Graphics.hpp>

void draw_shapes(sf::RenderWindow &window, sf::RectangleShape rectangle, sf::CircleShape);

void draw_crab(sf::RenderWindow &window, sf::Sprite crabSprite);

void check_for_five_hundred(sf::RectangleShape rectangle);

void move_rectangle(sf::RectangleShape &rectangle);

void move_circle(sf::CircleShape &circle);
