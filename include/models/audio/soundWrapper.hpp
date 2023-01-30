#ifndef SOUND_WRAPPER_HPP
#define SOUND_WRAPPER_HPP

#include <SFML/Audio.hpp>
#include "./iSound.hpp"

class SoundWrapper : public ISound, public sf::Sound
{
public:
  SoundWrapper(sf::Sound sound);
  void play() override;
};

#endif
