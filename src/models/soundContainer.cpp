#include "../../include/models/audio/soundContainer.hpp"

SoundContainer::SoundContainer(sf::Sound &sound) { sound_ = sound; }

void SoundContainer::play()
{
  sound_.play();
}
