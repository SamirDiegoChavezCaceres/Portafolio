int has(char*);

class empresa{
  char* name;
  int open;
  int close;
  int high;
  int low;
  public:
    empresa(char*,int,int,int,int);
    bool comparar(char* b);
    int hash();
    void print();
    char* n();
};

class nodo{
  empresa* valor;
  nodo *next;
  public:
    void insert(empresa*,nodo*);
    nodo* search(char*);
    void printT();
    friend void print(nodo*);
};

class list{
  int size;
  nodo** arr;
  public:
    list(int);
    void insert(empresa*);
    nodo* search(char*);
    void printTable();
};
