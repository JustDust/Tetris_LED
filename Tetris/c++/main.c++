#include <SFML\Graphics.http> //+ 
#include "header.h" //+
#include "cenario.h"




int main()
{ 
    sf::RenderWindow window(sf:: VideoMode (TetrisVars::windWidth +100,TetrisVars::winHeith), "Simple tetris");
    Cenario game(window);
    
    while ( window.isOpen())
    {
        Sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            window.close();
            cenario.checkEvents(event);
        }
        window.clear();
        game.update();
        game.draw();
        window.display(); 
    }
}