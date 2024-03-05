class nodo{
  int data;
  nodo* next;
  public:
    nodo(int);
    void add(int);
    nodo* getNext();
    friend void print(nodo*);
    friend nodo* suma(nodo*,nodo*);
};
void sumCarry(nodo**,int,int);
