//define estrutura da peça 2
#ifndef ESTRUCT_TWO
#define ESTRUCT_TWO

#include "estruct.h"

class Estruct_Two : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_Two ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, true, false, false},
            {true, true, true, false},
            {false, false, false, false}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_TWO