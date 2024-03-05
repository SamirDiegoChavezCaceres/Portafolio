#ifndef Y_H
#define Y_H
#include "X.h"
class Y: public X {
    public:
        C foo(B a){
            return X::foo(a);
        }
};
#endif