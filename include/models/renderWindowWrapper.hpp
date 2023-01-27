#ifndef RENDER_WINDOW_WRAPPER_HPP
#define RENDER_WINDOW_WRAPPER_HPP

#include "./iRenderWindow.hpp"

class RenderWindowWrapper : public IRenderWindow
{
public:
  RenderWindowWrapper(sf::VideoMode mode, const sf::String name) : window_(sf::RenderWindow(mode, name)) {}
  bool isOpen() const override { return window_.isOpen(); }
  bool pollEvent(sf::Event &event) override { return window_.pollEvent(event); }
  void close() override { window_.close(); }
  void clear() override { window_.clear(); }
  void draw(const sf::Drawable &drawable) override { window_.draw(drawable); }
  void display() override { window_.display(); }

private:
  sf::RenderWindow window_;
};

#endif
