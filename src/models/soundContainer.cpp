#include "../../include/models/audio/soundContainer.hpp"

SoundContainer::SoundContainer(ISound &sound) : sound_(sound) {}

void SoundContainer::play()
{
  sound_.play();
}
