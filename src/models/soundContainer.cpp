#include "../../include/models/audio/soundContainer.hpp"

SoundContainer::SoundContainer(sf::Sound &rSound) { sound_ = rSound; }

void SoundContainer::play()
{
  sound_.play();
}
