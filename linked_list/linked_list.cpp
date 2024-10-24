#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node *next;
};

int main() {

    Node n1;
    n1.data = 1;
    
    Node n2;
    n2.data = 2;
    n2.next = nullptr;
    n1.next = &n2;

    return 0;
}