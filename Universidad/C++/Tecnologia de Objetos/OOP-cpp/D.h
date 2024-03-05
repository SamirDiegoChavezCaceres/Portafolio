#ifndef D_H
#define D_H
#include <iostream>
using namespace std;
#include "B.h"
class D : public B { 
    public: 
        virtual void goo(){ cout << "D" << endl; }
};
#endif