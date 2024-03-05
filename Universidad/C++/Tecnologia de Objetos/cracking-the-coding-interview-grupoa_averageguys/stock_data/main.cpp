#include <iostream>

#include "stock_data.h"

using namespace std;

int main(){
  list prueba(5);
  prueba.insert(new empresa("taxichurro",1111,1111,1111,1111));
  prueba.insert(new empresa("cinemark",2222,2222,2222,2222));
  prueba.insert(new empresa("claro",3333,3333,3333,3333));
  prueba.insert(new empresa("BCP",4444,4444,4444,4444));
  prueba.insert(new empresa("entel",5555,5555,5555,5555));
  print(prueba.search("BCP"));
  print(prueba.search("claro"));
  print(prueba.search("entel"));
  print(prueba.search("taxichurro"));
  print(prueba.search("cinemark"));
  cout << "___________tabla-hash_____________" << endl;
  prueba.printTable();
  return 0;
}
