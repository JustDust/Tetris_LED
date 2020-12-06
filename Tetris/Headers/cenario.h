#ifndef CENARIO //inclui cenario
#define CENARIO // define

#include "header.h"

class Cenario //torna classe 
{
  sf::RenderWindow &window;
  SHPTRSistdezen Sistdezen;
  void init();
public: 
  Cenario(sf::RenderWindow &window); //Construtor //verificar letra maiuscula em Cenario
  void draw(); //rapassado pra classe de desenho
  void update(); // update
  void checkEvents(sf::Event &event); //recebe como parametreo evento q vem da main
};
#endif //cenario