#include "../include/animations.hpp"
#include "./mockModels/mockSound.hpp"

TEST(playSound, callsPlayOnTheSoundArgument)
{
  MockSound mockSound;

  EXPECT_CALL(mockSound, play())
      .Times(1);
  playSound(mockSound);
}
