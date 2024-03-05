#include "sumlist.h"
#include <iostream>

using namespace std;

int main(){
  nodo* a = new nodo(0);
  a->add(6);
  a->add(1);
  a->add(7);
  nodo* b = new nodo(0);
  b->add(2);
  b->add(9);
  b->add(5);
  print(a->getNext());
  print(b->getNext());
  
  nodo* s = suma(a->getNext(),b->getNext());
  cout<< "sum; " << endl;
  print(s);
}
