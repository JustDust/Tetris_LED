//define estrutura da peça 5
#ifndef ESTRUCT_FIVE
#define ESTRUCT_FIVE

#include "estruct.h"

class Estruct_Five : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_Five ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, false, true, false},
            {true, true, true, false},
            {false, false, false, false}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_FIVE