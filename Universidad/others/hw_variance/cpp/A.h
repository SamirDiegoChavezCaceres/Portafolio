#ifndef A_H
#define A_H
#include <iostream>
using namespace std;
class A {
    public:
        virtual void boo(){
            cout << "A::boo()" << endl;
        }
};
#endif