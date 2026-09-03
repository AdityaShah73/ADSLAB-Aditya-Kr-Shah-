#include <iostream>
using namespace std;

class Queue {
    int arr[10];
    int front = -1;
    int rear = -1;
    int size = 0;

public:

    void push(int x) {
        if (size == 10) {
            cout << "Queue Overflow\n";
            return;
        }

        if (size == 0) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % 10;
        }

        arr[rear] = x;
        size++;
    }

    int pop() {
        if (size == 0) {
            cout << "Queue Underflow\n";
            return -1;
        }

        int x = arr[front];

        if (size == 1) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % 10;
        }

        size--;

        return x;
    }

    int top() {
        if (size == 0) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return arr[front];
    }
};

int main() {

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Top: " << q.top() << endl;

    cout << "Removed: " << q.pop() << endl;
    cout << "Removed: " << q.pop() << endl;

    cout << "Top: " << q.top() << endl;

    return 0;
}