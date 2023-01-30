#ifndef MOCK_RENDER_WINDOW_HPP
#define MOCK_RENDER_WINDOW_HPP

#include <gmock/gmock.h>
#include "../../include/models/window/iRenderWindow.hpp"

class MockRenderWindow : public IRenderWindow
{
public:
  MOCK_METHOD(bool, isOpen, (), (const, override));
  MOCK_METHOD(bool, pollEvent, (sf::Event & event), (override));
  MOCK_METHOD(void, close, (), (override));
  MOCK_METHOD(void, clear, (), (override));
  MOCK_METHOD(void, draw, (const sf::Drawable &drawable), (override));
  MOCK_METHOD(void, display, (), (override));
};

#endif
