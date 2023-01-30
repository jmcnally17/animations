#include "../include/animations.hpp"
#include "../include/models/window/renderWindowWrapper.hpp"
#include "../include/models/shapes/rectangleShapeWrapper.hpp"
#include "../include/models/shapes/circleShapeWrapper.hpp"
#include "../include/models/audio/soundWrapper.hpp"
#include "../include/models/audio/soundContainer.hpp"

int main()
{
  RenderWindowWrapper window(sf::VideoMode(1536, 1344), "Animations");

  sf::RectangleShape rectangle(sf::Vector2f(100, 500));
  RectangleShapeWrapper rectangleWrapper(rectangle);
  rectangleWrapper.setFillColor(sf::Color::Green);
  rectangleWrapper.setPosition(50, 50);

  sf::CircleShape circle(50);
  CircleShapeWrapper circleWrapper(circle);
  circleWrapper.setFillColor(sf::Color::Red);
  circleWrapper.setPosition(1400, 1200);

  sf::Texture crabTexture;
  crabTexture.loadFromFile("public/images/crab.png");
  sf::Sprite crabSprite;
  crabSprite.setPosition(800, 700);
  crabSprite.setTexture(crabTexture);

  sf::SoundBuffer buffer;
  buffer.loadFromFile("public/audio/pacmanDeath.wav");
  sf::Sound sound(buffer);
  SoundWrapper soundWrapper(sound);
  SoundContainer soundContainer(soundWrapper);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
      {
        window.close();
      }
    }

    drawObjects(window, rectangleWrapper, circleWrapper, crabSprite);
    moveRectangle(rectangleWrapper);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
      moveCircle(circleWrapper, true);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
      moveCircle(circleWrapper, false);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
      playSound(soundContainer);
    }
  }

  return 0;
}
