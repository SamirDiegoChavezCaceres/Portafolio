#include "chess.h"
#include "figures.h"

void display(){

  char** repeatVKB = repeatV(rook,2);
  char** repeatHKB = repeatH(knight,3);

  char** blackSquare = reverse(whiteSquare);
  char** superImp = superImpose(knight,blackSquare);

  char** joinOne = join(superImp,blackSquare);
  char** joinTwo = join(joinOne,repeatHKB);
  
  char** upOne = up(joinTwo, repeatVKB);
  interpreter(upOne);
}