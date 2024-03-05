#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** two = join(whiteSquare, blackSquare);
  char** four = join(two, two);
  char** eight = join(four, four);
  char** eightReverse = reverse(eight);
  char** upLine = up(eightReverse, eight);
  char** upTWoLine = up(upLine, upLine);
  interpreter(upTWoLine);
}
