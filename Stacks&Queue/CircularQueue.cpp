```cpp
// Program of array implementation of Circular Queue

#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

class CircularQ {
    int Q[SIZE];
    int front, rear;

public:
    CircularQ() {
        front = -1;
        rear = -1;
    }

    // Insert element into Circular Queue
    void push(int val) {
        // Queue is full
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is Full" << endl;
            return;
        }

        // First element
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % SIZE;
        }

        Q[rear] = val;
    }

    // Delete element from Circular Queue
    void pop() {
        // Queue is empty
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Deleted element: " << Q[front] << endl;

        // Only one element was present
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }

    // Display Circular Queue
    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Circular Queue: ";

        int i = front;

        while (true) {
            cout << Q[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {
    CircularQ q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.pop();
    q.pop();

    q.display();

    q.push(60);
    q.push(70);

    q.display();

    return 0;
}
```
