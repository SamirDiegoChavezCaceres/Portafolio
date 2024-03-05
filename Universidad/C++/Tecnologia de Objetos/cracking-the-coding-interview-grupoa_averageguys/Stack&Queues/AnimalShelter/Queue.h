#include <list>
using namespace std;
class Queue {
    private:
        list<char> queue;
    public:
        void push(char);
        char pop();
        void print();
        char popDog();
        char popCat();
};