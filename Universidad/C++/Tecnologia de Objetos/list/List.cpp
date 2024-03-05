#include "List.h"
#include <iostream>
using namespace std;
List::List(){
  last = nullptr;
}
List* List::append(int e){
  if(isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  Node* n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  return this;
}
int List::head(){
  return last->next->data;
}
int List::size(){
  int c = 0;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(iter == last){
      iter = nullptr;
    }
    c++;
  }
  return c;
}
int List::getKth(int idx){
  int c = 0;  
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(c == idx)
      return iter->data;
    c++;
  }
  return -1;
}
Node* List::removeKth(int idx){
  int c = 0;  
  Node* temp;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(c == (idx-1)) {
      temp = iter->next;
      iter->next -> data = iter->next -> next->data;
      iter->next -> next = iter->next -> next->next;
      return temp;
    }
    c++;
  }
  //idx-1 idx *
  //iter n n->next
  return nullptr;
}
void List::addKth(int idx, int e){
  if(idx<0)
    return 0;
  int c = 0;  
  Node* temp;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(c == idx-1) {
      temp = iter->next;

      iter->next = new Node;
      iter->next->data = e;
      iter->next->next = temp;
      
      iter = NULL;
    }
    c++;
    //if c = size()
    //modificas last;
  }
  
  //idx-1  idx     *
  //iter    n   n->next
}
bool List::isEmpty(){
  return last == nullptr;
};
void List::print(){
  Node* iter = last;
  while(iter){
    iter = iter->next;
    cout << iter->data << " ";
    if(iter == last)
      iter = nullptr;
  }
  cout << endl;
}
