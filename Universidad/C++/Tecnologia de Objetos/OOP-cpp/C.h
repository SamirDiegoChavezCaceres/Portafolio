#ifndef C_H
#define C_H
#include <iostream>
#include "A.h"
using namespace std;
class C : public A { 
    public: 
        virtual void goo(){ cout << "C" << endl; }
};
#endif 