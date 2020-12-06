#ifndef ESTRUCT
#define ESTRUCT

#include<vector>

using MatrixOFBool = std::vector<std::vector<bool>>;

class Estruct
{
   MatrixOfBoll matrix; 
public:
  Estruct (const MatrixOFBool &matrix);
  const MatrixOFBool &getMatrix();
  
  
};

#endif // ESTRUCT