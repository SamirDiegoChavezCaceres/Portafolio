#include "chess.h"
#include "figures.h"
#include "main.c"

void display(){
  //char** flipVKnight = flipV(knight); //parte con una linea vertical y las voltea
  //char** flipHKnight = flipH(knight); //parte con una linea horizontal y voltea

  //char** rotateLKnight = rotateL(knight); //rota izq antihorario
  //char** rotateRKnight = rotateR(knight); //rota der horario

  //char** joinOne = join(flipVKnight,flipHKnight);
  //char** joinTwo = join(rotateLKnight,rotateRKnight);

  //char** finalJoin = join(joinOne,joinTwo);

  
  interpreter(flipV(knight));
}