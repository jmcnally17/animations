#include "../include/animations.hpp"
#include "./mockModels/mockRenderWindow.hpp"

TEST(drawShapes, callsDrawOnTheWindowWithShapeArguments)
{
    MockRenderWindow window;
    sf::RectangleShape rectangle;
    sf::CircleShape circle;

    EXPECT_CALL(window, clear())
        .Times(1);
    EXPECT_CALL(window, draw(testing::Truly([](const sf::Drawable &drawable)
                                            { return true; })))
        .Times(2);
    EXPECT_CALL(window, display())
        .Times(1);
    drawShapes(window, rectangle, circle);
}
