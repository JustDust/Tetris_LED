#ifndef SISTDEZEN_ESTRUCT
#define SISTDEZEN_ESTRUCT

#include "header.h"

class Sistdezen_Estruct
{
    float x, y;
    SHPtrEstruct estruct; //ER?
    VectorOfRectangleShape rectangles;
public:
    Sistdezen_Estruct(SHPtrEstruct estruct, float x, float y );
    void draw(sf::RenderWindow &window)
    void configure ();
};


#endif // SISTDEZEN_ESTRUCT