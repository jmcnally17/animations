#include "../include/animations.hpp"
#include "./mockModels/mockSoundContainer.hpp"

TEST(playSound, callsPlayOnTheSoundArgument)
{
  MockSoundContainer MockSoundContainer;

  EXPECT_CALL(MockSoundContainer, play())
      .Times(1);
  playSound(MockSoundContainer);
}
