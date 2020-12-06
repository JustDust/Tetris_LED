//define estrutura da peça 1
#ifndef ESTRUCT_ONE
#define ESTRUCT_ONE

#include "estruct.h"

class Estruct_One : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_One ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, false, false, false},
            {false, false, false, false},
            {true, true, true, true}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_ONE