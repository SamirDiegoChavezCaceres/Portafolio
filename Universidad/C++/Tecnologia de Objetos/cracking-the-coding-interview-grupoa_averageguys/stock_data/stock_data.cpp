#include <iostream>
#include "stock_data.h" 

using namespace std;

int has(char* a){
  int i = 0,l = 0;
  while(a[i]){
    l += a[i];
    i++;
  }
  return l;
}

empresa::empresa(char* n,int o,int c,int h,int l){
  name = n;
  open = o;
  close = c;
  high = h;
  low = l;
}

bool empresa::comparar(char* b){
  return name == b;
}

int empresa::hash(){
  return has(name);
}

void empresa::print(){
  cout << ":::::::::::::::::::::"<< endl;
  cout << "nombre; " << name << endl;
  cout << "apertura; " << open << endl;
  cout << "cierre; " << close << endl;
  cout << "maximo; " << high << endl;
  cout << "minimo; " << low << endl;
  cout << ":::::::::::::::::::::"<< endl;
}

char* empresa::n(){
  return name;
}
void nodo::insert(empresa* v,nodo* n){
  valor = v;
  next = n;
}

nodo* nodo::search(char* v){
  nodo* aux = this;
  while(aux != NULL){
    if(aux->valor->comparar(v))
      return aux;
    aux = aux->next;
  }
  return NULL;
}

void nodo::printT(){
  nodo* aux = this;
  while(aux != NULL){
    cout << aux->valor->n() << "->";
    aux = aux->next;
  }
  cout << endl;
}
void print(nodo* a){
  if(a == NULL)
    cout << "valor no encontrado" << endl;
  else
    a->valor->print();
}

list::list(int sz){
  size = sz;
  arr = new nodo* [size];
}

void list::insert(empresa* v){
  int index = v->hash() % size;
  nodo* nuevo = new nodo();
  nuevo->insert(v,arr[index]);
  arr[index] = nuevo;
}

nodo* list::search(char* v){
  int index = has(v) % size;
  return arr[index]->search(v);
}
void list::printTable(){
  for(int i = 0;i<size;i++){
     cout << "[" << i << "] ";
     arr[i]->printT();
  }
}
