// S1--------->S2
// X--------->S1
// S2--------->S1

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {

    }

    void push(int x) {
        while (s1.size()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (s2.size()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        if (s1.empty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }

    int peek() {
        if (s1.empty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front: " << q.peek() << endl;
    cout << "Pop: " << q.pop() << endl;
    cout << "Front: " << q.peek() << endl;

    if (q.empty())
        cout << "Queue is Empty\n";
    else
        cout << "Queue is Not Empty\n";

    return 0;
}