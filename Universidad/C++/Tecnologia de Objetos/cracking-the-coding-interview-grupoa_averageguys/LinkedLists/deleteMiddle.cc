#include "LinkedList.h"

void Node::deleteMiddle() {
  int i = 0;
  Node* n = this;
  while(n->next != nullptr) {
    i++;
    n = n->next;
  }
  int mid = i/2;
  Node* aux = this;
  i = 0;
  while(i < mid) {
    i++;
    aux = aux->next;
  }
  
  n = aux->next;
  aux->data = n->data;
  aux->next = n->next;
}

int main() {
  Node list = Node(3);
  list.appendToTail(1);
  list.appendToTail(6);
  list.appendToTail(4);
  list.appendToTail(9);
  list.printList();
  list.deleteMiddle();
  list.printList();
  return 0;
}