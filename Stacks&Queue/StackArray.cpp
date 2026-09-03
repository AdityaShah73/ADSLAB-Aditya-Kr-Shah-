#include <bits/stdc++.h>
using namespace std;

class ST {
public:
    int top = -1;
    int arr[10];

    void push(int x) {
        if (top == 9) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }

        int el = arr[top];
        top--;
        return el;
    }

    int peek() {
        if (top == -1) {
            return -1;
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }
};

int main() {
    ST s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top: " << s.peek() << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.size() << endl;

    return 0;
}