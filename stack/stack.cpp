#include <iostream>
#include <stack>
using namespace std;

/*
stack operations
push
pop
peek
isEmpty
isFull -> implement max limit
*/

const int max_limit = 5;


bool isEmpty(stack<int> &stk) {
    if (stk.size() == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull(stack<int> &stk) {
    if (stk.size() >= 5) {
        return true;
    } else {
        return false;
    }
}

void push(stack<int>& stk, int n) {
    if (!isFull(stk)) {
        stk.push(n);
        cout << "pushed " << n  << " to the top of stack\n";
    } else {
        cout << "Cannot push, the stack is full!\n";
    }
}

void pop(stack<int>& stk) {
    if (!isEmpty(stk)) {
        stk.pop();
        cout << "popped from stack\n";
    } else {
        cout << "Stack is Empty!";
    }
}

void peek(stack<int>& stk) {
    cout << stk.top();
}


int main() {
    stack<int> plates;
    push(plates, 1);
    push(plates, 2);    
    push(plates, 3);    
    push(plates, 4);
    push(plates, 5); 
    push(plates, 6);

    pop(plates);
    peek(plates);
    
    return 0;
}