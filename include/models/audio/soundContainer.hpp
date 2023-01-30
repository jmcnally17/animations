#ifndef SOUND_CONTAINER_HPP
#define SOUND_CONTAINER_HPP

#include <SFML/Audio.hpp>
#include "./iSoundContainer.hpp"

class SoundContainer : public ISoundContainer
{
public:
  SoundContainer(sf::Sound &rSound);
  void play() override;

private:
  sf::Sound sound_;
};

#endif
