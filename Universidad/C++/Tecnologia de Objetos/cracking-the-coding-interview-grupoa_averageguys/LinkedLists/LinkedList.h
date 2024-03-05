
# include <iostream>

using namespace std;

class Node
{
    Node* next = 0;
    int data;
    public:
        Node(int d)
        {
            data = d;
        }
        void appendToTail(int d)
        {
            Node* end = new Node(d);
            Node* n = this;
            while (n->next != 0)
            {
                n = n->next;
            }
            n->next = end;
        }
        Node* deleteNode(Node* head, int d)
        {
            Node* n = head;
            if (n->data == d)
            {
                return head->next;
            }
            while (n->next != 0)
            {
                if (n->next->data == d)
                {
                    n->next = n->next->next;
                    return head;
                }
                n = n->next;
            }
            return head;
        }
        void printList()
        {
            Node* n = this;
            cout << "Lista: ";
            while (n != 0)
            {
                cout << n->data << " ";
                n = n->next;
            }
        }
        void deleteMiddle();
};
