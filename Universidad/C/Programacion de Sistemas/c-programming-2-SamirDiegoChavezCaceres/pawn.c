#include <stdio.h>

int main() {
	char* pawn[] = {
  "##########################################################",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                           ####                           ",
  "                         ########                         ",
  "                        ###....###                        ",
  "                       ###......###                       ",
  "                       ##........##                       ",
  "                       ##........##                       ",
  "                       ##........##                       ",
  "                       ##........##                       ",
  "                       ###......###                       ",
  "                        ###....###                        ",
  "                      #####....#####                      ",
  "                     ###..........###                     ",
  "                    ###............###                    ",
  "                    ##..............##                    ",
  "                   ###..............###                   ",
  "                   ##................##                   ",
  "                   ##................##                   ",
  "                   ##................##                   ",
  "                   ##................##                   ",
  "                   ##................##                   ",
  "                   ##................##                   ",
  "                   ###..............###                   ",
  "                    ##..............##                    ",
  "                    ###............###                    ",
  "                     ####........####                     ",
  "                     ####........####                     ",
  "                   ####............####                   ",
  "                  ###................###                  ",
  "                 ###..................###                 ",
  "                ###....................###                ",
  "               ###......................###               ",
  "               ##........................##               ",
  "              ###........................###              ",
  "              ##..........................##              ",
  "             ###..........................###             ",
  "             ##............................##             ",
  "             ##............................##             ",
  "            ###............................###            ",
  "            ##..............................##            ",
  "            ##..............................##            ",
  "            ##..............................##            ",
  "            ##..............................##            ",
  "            ##################################            ",
  "            ##################################            ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "                                                          ",
  "##########################################################",
  0
};
  //len
  int i = 0, j, lenV = 0, lenH = 0;
	while(pawn[i]){
    j = 0;
    while((*(pawn[i]+j)) && i == 0){
      lenH++;
      j++;
    }
    lenV++;
    i++;
  }
  printf("V: %d, H: %d\n", lenV, lenH);
  //lee
	//int i = 0, j;
	/* while(pawn[i]){
    j = 0;
    while(*(pawn[i]+j)){
      printf("%c", (*(pawn[i]+j)));
      j++;
    }
    printf("\n");
    i++;
  } */
  return 0;
}