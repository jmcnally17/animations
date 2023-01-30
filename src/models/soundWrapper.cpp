#include "../../include/models/audio/soundWrapper.hpp"

SoundWrapper::SoundWrapper(sf::Sound sound) : sf::Sound::Sound(sound) {}

void SoundWrapper::play()
{
  sf::Sound::play();
}
