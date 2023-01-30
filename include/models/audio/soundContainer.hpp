#ifndef SOUND_CONTAINER_HPP
#define SOUND_CONTAINER_HPP

#include <SFML/Audio.hpp>
#include "./iSoundContainer.hpp"
#include "./iSound.hpp"

class SoundContainer : public ISoundContainer
{
public:
  SoundContainer(ISound &sound);
  void play() override;

private:
  ISound &sound_;
};

#endif
