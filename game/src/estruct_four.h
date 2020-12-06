//define estrutura da peça 4
#ifndef ESTRUCT_FOUR
#define ESTRUCT_FOUR

#include "estruct.h"

class Estruct_Four : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_Four ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, false, false, false},
            {true, true, false, false},
            {true, true, false, false}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_FOUR