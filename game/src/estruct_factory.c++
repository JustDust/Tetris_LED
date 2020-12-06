#include "estruct_factory.h"
#include "estruct_one.h"
#include "estruct_two.h"
#include "estruct_tree.h"
#include "estruct_treeinverted.h"
#include "estruct_four.h"
#include "estruct_five.h"
#include <cstdlib>
#include <ctime>

const Estruct_Factory::VectorOfMakes Estruct_Factory::vecMakes =
{
    &Estruct_Factory::makeOne,
    &Estruct_Factory::makeTwo,
    &Estruct_Factory::makeTree,
    &Estruct_Factory::makeTreeInverted,
    &Estruct_Factory::makeFour,
    &Estruct_Factory::makeFive,
}


SHPtrSistdezen_Estruct Estruct_Factory::makeOne()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_one
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_One()),200, 200)
    );
}

SHPtrSistdezen_Estruct Estruct_Factory::makeTwo()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_two
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_Two()),200, 200)
    );
}

SHPtrSistdezen_Estruct Estruct_Factory::makeTree()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_tree
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_Tree()),200, 200)
    );
}
SHPtrSistdezen_Estruct Estruct_Factory::makeTreeInverted()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_treeinverted
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_TreeInverted()),200, 200)
    );
}
SHPtrSistdezen_Estruct Estruct_Factory::makeFour()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_four
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_Four()),200, 200)
    );
}

SHPtrSistdezen_Estruct Estruct_Factory::makeFive()
{
    return SHPtrEstruct_Factory // busca estrutura 2 no arquivo estruct_five
   (
       new Estruct_Factory(SHPtrEstruct(new Estruct_Five()),200, 200)
    );  
}

Estruct_Factory::Estruct_Factory();
{
    srand((unsigned) time (0));

}

SHPtrSistdezen_Estruct Estruct_Factory::make()
{
    unsigned int index = rand() % 6;
    return vecMakes[index];
}

Estruct_Factory::Estruct_Factory