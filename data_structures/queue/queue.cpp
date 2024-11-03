#include <iostream>
#include <queue>
using namespace std;

/*
queue operations
enqueue
dequeue
peek
isEmpty
clear
*/

bool isEmpty(queue<int> &q) {
    if (q.size() == 0) {
        return true;
    } else {
        return false;
    }
}

void peek(queue<int> &q) {
    cout << q.front() << "\n";
}

void enqueue(queue<int> &q, int n) {
    q.push(n);
    cout << "Enqueued\n";
}

void dequeue(queue<int> &q) {
    if (!isEmpty(q)) {
        q.pop();
        cout << "Dequeued!\n";
    } else {
        cout << "queue is empty\n";
    }
}

void clear(queue<int> &q) {
    while (!q.size() == 0)
    {
        q.pop();
    }
    cout << "queue was cleared \n";
}

int main() {
    queue<int> q;

    for (int i = 0; i<6; ++i) {
        enqueue(q, i);
    };

    dequeue(q);
    clear(q);

    return 0;
}