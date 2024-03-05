#include "sumlist.h"
#include <iostream>

using namespace std;

nodo::nodo(int d){
  data = d;
  next = NULL;
}

void nodo::add(int d){
  nodo* nuv = new nodo(d);
  nuv->next = this->next;
  this->next = nuv;
}
nodo* nodo::getNext(){
  return next;
}
void print(nodo* n){
  while(n != NULL){
    cout << n->data << "->";
    n = n->next;
  }
  cout << endl;
}

void sumaCarry(nodo** aux,int *carry,int sum){
  if(sum > 0)
    *carry = 1;
  else
    *carry = 0;
  *aux = new nodo(sum % 10);
}

nodo* suma(nodo* num1, nodo* num2){
  nodo* result = NULL;
  nodo* a = NULL;
  nodo* aux;
  
  int carry = 0;
  int sum = 0;

  while(num1 != NULL && num2 != NULL){
    sum = num1->data + num2->data + carry;
    sumaCarry(&aux,&carry,sum);
    if(a == NULL){
      a = aux;
      result = a;
    }else{
      a->next = aux;
      a = a->next;
    }
    num1 = num1->next;
    num2 = num2->next;

    if(num1 == NULL){
      num1 = num2;
    }
  }
  while(num1 != NULL){
    sum = num1->data + carry;
    sumaCarry(&aux,&carry,sum);
    a->next = aux;
    a = a->next;
    num1 = num1->next;
  }
  return result;
}

