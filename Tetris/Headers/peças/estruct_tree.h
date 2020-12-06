//define estrutura da peça 3
#ifndef ESTRUCT_TREE
#define ESTRUCT_TREE

#include "estruct.h"

class Estruct_Tree : public Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct_Tree ()
    : Estruct
    (
        {
            {false, false, false, false},
            {false, false, false, false},
            {false, true, true, false},
            {false, false, true, true}
    )
    //fabrica de peças
  {}
  
};

#endif // ESTRUCT_TREE