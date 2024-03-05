#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    Matrix mtr(4,5);
    int i = 0;
    int vector[5] = {1,2,3,4,5};
    for(i = 0; i < mtr.getRows(); i++) {
        mtr.changeRows(vector, i);
    }
    mtr.printM();
    mtr.set(1,2,0);
    mtr.printM();
    mtr.detectZeros();
    mtr.printM();

    return 0;
}