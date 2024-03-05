#include "Complex.h"
complex& complex::operator*=(complex z){
    re = re*z.re;
    im = im*z.im;
    return *this;
}