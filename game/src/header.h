#ifndef HEADER
#define HEADER

#include <SFML/Graphics.hpp>
#include <memory>

class Sistdezen;
class Estruct;
class Estruct_Factory;


using SHPtrSistdezen = std::shared_ptr<Sistdezen>;
using SHPtrEstruct = std::shared_pt<Estruct>;
using SHPtrRetangleShape = std::shared_pt<sf::RectangleShape>;
using VectorOfRectangleShape = std::vector<SHPtrRetangleShape>;
using SHPtrEstruct_Factory = std::shared_ptr<Estruct_Factory>;
struct TetrisVars // error /
{
    static const int windWidth = 280;
    static const int winHeight = 400;
    static const int numberOfRects = 4;
    static const int rectLength =20;

}

#endif //header