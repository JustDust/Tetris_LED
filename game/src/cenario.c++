#include "cenario.h"
#include "sistdezen.h"

void Cenario::init()
{
    this->sistdezen = SHPSistdezen(new Sistdezen(this->window));
}

Cenario::cenario(sf::RenderWindow &window); 
 : window(window)
{
  this->init();
} //Construtor

void Cenario::draw()
{
  this->sistdezen->draw();
}

void Cenario::update()
{

}

void Cenario::checkEvents(sf::Event &event)
{

}