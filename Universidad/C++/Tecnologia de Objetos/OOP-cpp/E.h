#ifndef E_H
#define E_H
#include <iostream>
using namespace std;
#include "C.h"
class E : public C { 
    public: 
        virtual void foo(){ cout << "E" << endl; }
};
#endif