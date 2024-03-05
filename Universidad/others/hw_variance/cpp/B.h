#ifndef B_H
#define B_H
#include "A.h"
#include <iostream>
using namespace std;
class B: public A {
    public:
        void boo() {
            cout << "B::boo()" << endl;
        }
};
#endif