#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include "stack.h"
template <typename T>
class ArrayStack : public Stack<T> {
    public:
        ArrayStack(int s): size{s}, data{new T[size]}, sp{data} {};
        void push(T);
        void pop();
        T top();
        bool empty();
        void resize();
    private:
        T* data;
        int size; //array length
        T* sp; //stack pointer to last position
};
#endif