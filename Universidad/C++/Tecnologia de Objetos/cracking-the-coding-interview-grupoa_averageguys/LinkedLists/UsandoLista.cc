
# include "LinkedList.h"
# include <iostream>

using namespace std;

int main()
{
    Node lista = Node(1);
    lista.appendToTail(2);
    lista.appendToTail(3);
    lista.printList();
    return 0;
}
