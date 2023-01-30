#include "../../include/models/audio/soundContainer.hpp"

SoundContainer::SoundContainer(sf::Sound &rSound) { sound = rSound; }

void SoundContainer::play()
{
  sound.play();
}
