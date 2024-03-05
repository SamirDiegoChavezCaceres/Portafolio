#include "chess.h"
#include "figures.h"

void display(){
  char** blackSquare = reverse(whiteSquare);
  char** two = join(whiteSquare, blackSquare);
  char** four = join(two, two);
  char** eight = join(four, four);
  interpreter(eight);
}
