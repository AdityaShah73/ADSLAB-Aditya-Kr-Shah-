#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(q.size() > 0) {
        s.push(q.front());
        q.pop();
    }

    while(s.size() > 0) {
        q.push(s.top());
        s.pop();
    }

    while(q.size() > 0) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
} 