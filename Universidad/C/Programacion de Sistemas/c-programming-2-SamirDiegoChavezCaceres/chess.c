#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

    char** flipV(char** imgRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[i][57-j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        free(imgCopy);
        return imgRef;
    }

    char** flipH(char** imgRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[57-i][j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }

    char** rotateL(char** imgRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[57-j][i] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }

    char** rotateR(char** imgRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[j][57-i] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }

    char** reverse(char** imgRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                char c;
                switch(imgRef[i][j]){
                    case '_': c = '@'; break; 
                    case '=': c = '#';; break; 
                    case '.': c = '@';; break; 
                    case '@': c = '_';; break; 
                    case '#': c = '=';; break; 
                    default: c = '.'; break; 
                }
                imgCopy[i][j] = c;
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }

    char** superImpose(char** imgUpRef, char** imgDwnRef){
        char** imgCopy = (char**) malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgUpRef[i]){
            imgCopy[i] = (char*) malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgUpRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgUpRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                if (imgDwnRef[i][j] == ' '){
                    imgCopy[i][j] = imgUpRef[i][j];
                } else {
                    imgCopy[i][j] = imgDwnRef[i][j];
                }
                j++;
            }
            i++;
        } 
        imgDwnRef = imgCopy;
        return imgDwnRef;
    }

/*
    char** join(char** imgLftRef, char** imgRgtRef){
        //LO MISMO, PERO SE SACA LENHORIZONTAL DE LA FIGURA 
        char** imgCopy = malloc((58 * sizeof(char*)));
        int i = 0, j, size;
        while(imgRgtRef[i]){
            imgCopy[i] = malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        //.....s
        while(imgCopy[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgCopy[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgLftRef = imgCopy;
        return imgLftRef;
    }

    char** up(char** imgUpRef, char** imgDwnRef){
        //ES LO MISMO QUE JOIN PERO EN SENTIDO VERTICAL
        char** imgCopy = malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgDwnRef = imgCopy;
        return imgDwnRef;
    }

    char** repeatV(char** imgRef, int n){
        //SE MULTIPLICA EL MALLOC POR N AL MOMENTO DE CREAR FILAS
        char** imgCopy = malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }

    char** repeatH(char** imgRef, int n){
        //SE MULTUPLICA TBM POR N EN CADA FILA PARA CREAR LAS COLUMNAS
        char** imgCopy = malloc((58 * sizeof(char*)));
        int i = 0, j;
        while(imgRef[i]){
            imgCopy[i] = malloc(58 * sizeof(char));
            i++;
        }
        i = 0;
        while(imgRef[i]){ //imgRef[i] == *(imgRef+i)
            j = 0;
            while(imgRef[i][j]){ //imgRef[i][j] == *(*(imgRef+i)+j)
                imgCopy[i][j] = imgRef[i][j];
                j++;
            }
            i++;
        } 
        imgRef = imgCopy;
        return imgRef;
    }
*/
    