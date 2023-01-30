#ifndef MOCK_SOUND_CONTAINER_HPP
#define MOCK_SOUND_CONTAINER_HPP

#include <gmock/gmock.h>
#include "../../include/models/iSoundContainer.hpp"

class MockSoundContainer : public ISoundContainer
{
public:
  MOCK_METHOD(void, play, (), (override));
};

#endif
