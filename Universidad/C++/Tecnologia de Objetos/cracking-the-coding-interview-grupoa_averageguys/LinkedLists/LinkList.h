class Node {
    public:
        Node(int d) {
            data = d;
            next = nullptr;
        }
        void setNext(Node* n) {
            next = n;
        }
        Node* getNext() {
            return next;
        }
        void setData(int d) {
            data = d;
        }
    private:
        int data;
        Node* next;
};
class LinkedList {
    public:
        LinkedList();
        void add(int);
        void print();
        Node* getHead();
    private:
        Node* head;
};