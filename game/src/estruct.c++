#include "estruct.h"



Estruct::Estruct(const MatrixOFBool &matrix)
  :matrix (matrix)
{

}

const MatrixOFBool &Estruct::getMatrix()
{
    return this->matrix;
}