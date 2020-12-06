#ifndef ESTRUCT_FACTORY
#define ESTRUCT_FACTORY

#include "header.h"
#include <functional>

class Estruct_Factory
{
    using Lambda = Std::<std::function<SHptrEstruct_Factory()>;
    using VectorOfMakes = sd::vector<Lambda>>;
    static const VectorOfMakes  vecMakes;

    static SHptrSistdezen_Estruct makeOne();
    static SHptrSistdezen_Estruct makeTwo();
    static SHptrSistdezen_Estruct makeTree();
    static SHptrSistdezen_Estruct makeTreeInverted();
    static SHptrSistdezen_Estruct makeFour();
    static SHptrSistdezen_Estruct makeFive();
public:
    Estruct_Factory();
    SHptrEstruct_Factory make();

};

#endif // ESTRUCT_FACTORY