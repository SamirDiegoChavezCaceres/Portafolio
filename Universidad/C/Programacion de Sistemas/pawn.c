#include <stdio.h>
#include <stdlib.h>
#include "figures.h"
char** flipV(char**);
void printA(char**);
int lenH(char*);
int lenV(char**);
int main() {
  //char** copyPawn = malloc(sizeof(pawn));
  //copyPawn = pawn;
	//char** pawnn = malloc(sizeof(pawn));
  //*(pawnn + 50) = *(pawn + 50);
 // *(*(pawnn + 50)+14) = *(*(copyPawn));
//printf("%s\n", (pawn[57]));
char*** img; 
img = flipV(knight);
int m = lenH(flipV(knight)[0]);
int n = lenV(flipV(knight));
//int m = sizeof(char);
//int m = len(pawn[0]);
printf("\n%c", img[77]);
printf("\n%d", m);
printf("\n%d", n);
//printA(pawn);

//*(*(pawnn + 50)+14) = 'a';
//printf("(%c)\n", *(*(copyPawn + 50)+14));
//printf("%s\n", (*(pawnn + 50)));
//printf("%c\n", *(*(pawn+0)+0));
//printA(pawnn);
//printA(img);
}

char** flipV(char** imgRef){
  char** vertImg = malloc((sizeof(char*)*59));
  int i = 0, j;
  while(imgRef[i]){
    vertImg[i] = malloc(sizeof(char)*59);
    i++;
  }
  i = 0;
  while(imgRef[i]){
    j = 0;
    while(imgRef[i][j]){
      vertImg[i][j] = imgRef[i][58-j];
      j++;
    }
    i++;
  } 
  imgRef = vertImg;
  return imgRef;
} 

void printA(char** imgRef){
  int i = 0, j;
  while(imgRef[i] != 0){
    j = 0;
    while(j < 58){
      char c = imgRef[i][j];
      printf("%c", c);
      j++;
    }
    printf("\n");
    i++;
  } 
}

int lenH(char* list){
  int i = 0;
  while(list[i] != 0){
    i++;
  }
  return i;
}
int lenV(char** list){
  int i = 0;
  while(list[0][i] != 0){
    i++;
  }
  return i;
}