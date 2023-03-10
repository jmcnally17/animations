#ifndef RENDER_WINDOW_WRAPPER_HPP
#define RENDER_WINDOW_WRAPPER_HPP

#include "./iRenderWindow.hpp"

class RenderWindowWrapper : public IRenderWindow
{
public:
  RenderWindowWrapper(sf::VideoMode mode, const sf::String name);
  bool isOpen() const override;
  bool pollEvent(sf::Event &event) override;
  void close() override;
  void clear() override;
  void draw(const sf::Drawable &drawable) override;
  void display() override;

private:
  sf::RenderWindow window_;
};

#endif
