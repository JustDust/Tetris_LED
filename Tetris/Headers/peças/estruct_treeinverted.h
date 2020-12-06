//define estrutura da peça 3I
#ifndef ESTRUCT_TREEINVERTED
#define ESTRUCT_TREEINVERTED

#include "estruct.h"

class Estruct_TreeInverted : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_TreeInverted ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, false, false, false},
            {false, true, true, false},
            {true, true, false, false}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_TREEINVERTED