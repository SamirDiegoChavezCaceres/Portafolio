#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** blackSquareRook = superImpose(rook,blackSquare);
  char** whiteSquareRook = superImpose(rook,blackSquare);
  char** blackSquareRook = superImpose(rook,blackSquare);
  
  int i;
  for (i = 1; i <= 8; i++){
    if(i == 1 || i == 8){
      
    }
  }


  char** two = join(whiteSquare, blackSquare);
  char** four = join(two, two);
  char** eight = join(four, four);
  char** eightReverse = reverse(eight);
  interpreter(blackSquareRook);
}
