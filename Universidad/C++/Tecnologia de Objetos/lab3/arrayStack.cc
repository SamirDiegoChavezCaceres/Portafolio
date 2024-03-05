#include "arrayStack.h"
#include <iostream>
#include <assert.h>
template <typename T>
void ArrayStack<T>::push(T e){
    //assert(sp >= data);
    int numelements = sp - data;
    if(numelements == size)
        resize();
    *sp = e;
    sp++;
}
template <typename T>
void ArrayStack<T>::pop(){
    //assert(sp >= data);
    int numelements = sp - data;
    if(empty()) //1.
        return;
    sp--;
    //if(numelements == 1) assert(sp == data)//2.
}
template <typename T>
bool ArrayStack<T>::empty(){
    //assert(sp >= data); //5.
    int numelements = sp - data;  
    //if(sp == data) assert(numelements == 0); //6.
    return numelements == 0;
}
template <typename T>
void ArrayStack<T>::resize(){
    int FACTOR = 10;
   //assert(FACTOR > 1 && FACTOR < 20);
    T* newData = new T[size+FACTOR];
    for(int i = 0; i < size; i++)
        newData[i] = data[i];
    delete [] data;
    data = newData;
    //sp = data + size;
    size += FACTOR;
    sp = data + size;
    //assert(size == sp - data);
    
    //assert(size % FACTOR == 0);
}
template <typename T>
T ArrayStack<T>::top(){
    //assert(sp >= data); 
    int numelements = sp - data;
    //assert(!empty()); //3.
    //assert(*(sp-1) == *data + numelements - 1); //4. sp-1 need to be the top element as *data + ne - 1 is.
    return *(sp-1);
}