#ifndef LIST_H
#define LIST_H
struct Node {
  int data;
  Node* next;
};
class List {
  public:
    List();
    List *append(int e);
    int head();
    List *tail();
    bool isEmpty();
    int size();
    int getKth(int idx); //includes 0
    Node* removeKth(int idx); //includes 0
    void addKth(int idx, int e); //includes 0
    void print();
  private:
    Node* last;  
};
#endif
