#ifndef C_H
#define C_H
#include "B.h"
#include <iostream>
using namespace std;
class C: public B {
    public:
        void boo() {
            cout << "C::boo()" << endl;
        }
};
#endif