#ifndef ESTRUCT
#define ESTRUCT

#include<vector>

using MatrixOfBool = std::vector<std::vector<bool>>;

class Estruct
{
    MatrixOfBool matrix;
    MatrixOfBool matrixBeforeRotate;
    unsigned int numOfRotations = 0;
    unsigned int numMaxOfRotations;
public:
    Estruct (const MatrixOfBool &matrix, unsigned int numMaxOfRotations);
    const MatrixOfBool &getMatrix();
    void doRotation();
    void rotation();
    void revertRotation();
};

#endif // ESTRUCT