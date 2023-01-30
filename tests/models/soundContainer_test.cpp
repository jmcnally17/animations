#include "../../include/models/audio/soundContainer.hpp"
#include "../mockModels/mockSound.hpp"

TEST(SoundContainer, playCallsPlayOnSoundClassMember)
{
  MockSound sound;
  SoundContainer soundContainer(sound);

  EXPECT_CALL(sound, play())
      .Times(1);
  soundContainer.play();
}
