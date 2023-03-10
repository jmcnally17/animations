#ifndef MOCK_SOUND_HPP
#define MOCK_SOUND_HPP

#include <gmock/gmock.h>
#include "../../include/models/audio/iSound.hpp"

class MockSound : public ISound
{
public:
  MOCK_METHOD(void, play, (), (override));
};

#endif
