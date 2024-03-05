#ifndef B_H
#define B_H
#include <iostream>
#include "A.h"
using namespace std;
class B : public A { 
    public: 
        virtual void foo(){ cout << "B" << endl; }
};
#endif