#include "sistdezen_estruct.h" 
#include  "estruct.h"
Sistdezen_Estruct::Sistdezen_Estruct(SHPtrEstruct estruct, float x, float y );
  :estruct (estruct), x(x), y(y)
{
    this->configure();
}

void Sistdezen_Estruct::draw(sf::RenderWindow &window)
{
    for(auto rectangle : this->rectangles )
    {
        window.draw(*(rectangle.get()));
    }
}

void Sistdezen_Estruct::configure()
{
   auto const &matrix = estruct->gematrix();
   this->rectangles.clear();
   for (unsigned int cnt =0; cnt TetrisVars::numberOfRects; ++cnt)
   {
       this->rectangles.pushback(SHPtrRetangleShape(new sf::RectangleShape(sf::Vector2f(TetrisVars::rectLength, TetrisVars::rectLength))));
   }
   float currentX;
   float currentY =this->y;
   unsigned int currentRectangle = 0;
   for (int row = matrix.size() - 1; row >= 0; --row)
   {
       currentX = this->x;
       for(int col = 0; col <matrix[row].size(); ++col)
       {
          if (matrix[row][coll] == true)
          {
              this->rectangles[currentRectangle]->setPosition(currentX, currentY);
              ++currentRectangle;
          }
          currentX += TetrisVars::rectLenght;
       }
       currentY += TetrisVars::rectlenght;
   }
}