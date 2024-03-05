#include "Queue.h"
#include <iostream>
using namespace std;

void Queue::push(char c) {
    queue.push_back(c);
}

char Queue::pop() {
    char c = queue.back();
    queue.pop_front();
    return c;
}

void Queue::print() {
    for (char c : queue) {
        cout << c << " -> ";
    }
    cout << endl;
}

char Queue::popDog() {
    //buscar un d y sacarlo de la lista 
}

char Queue::popCat() {
    //buscar un c y sacarlo de la lista
}