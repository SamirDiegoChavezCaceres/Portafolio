#include "list.h"
#include <iostream>
using namespace std;
int main(){
  List* l = new List;
  l->append(1)->append(2)->append(3)->append(4)->append(5);
  cout << l->head() << endl; //1
  cout << l->size() << endl; //5
  cout << l->getKth(2) << endl; //3
  l->print(); //1 2 3 4 5
  cout << l->removeKth(2)->data << endl; //3
  l->print(); //1 2 4 5
  cout << l->size() << endl; //4
  l->addKth(2, 10); //1 2 10 4 5
  cout << l->size() << endl; //5
  cout << l->getKth(2) << endl; //10
  return 0;
}