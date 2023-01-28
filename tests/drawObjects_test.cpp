#include "../include/animations.hpp"
#include "./mockModels/mockRenderWindow.hpp"

TEST(drawObjects, callsDrawOnTheWindowWithShapeArguments)
{
    MockRenderWindow window;
    sf::RectangleShape rectangle;
    sf::CircleShape circle;
    sf::Sprite sprite;

    EXPECT_CALL(window, clear())
        .Times(1);
    EXPECT_CALL(window, draw(testing::Truly([](const sf::Drawable &drawable)
                                            { return true; })))
        .Times(3);
    EXPECT_CALL(window, display())
        .Times(1);
    drawObjects(window, rectangle, circle, sprite);
}
