#include <bits/stdc++.h>
using namespace std;

class ST {
public:
    queue<int> q;

    void push(int x) {
        int s = q.size();

        q.push(x);

        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) {
            cout << "Stack Empty\n";
            return -1;
        }

        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        if (q.empty()) {
            cout << "Stack Empty\n";
            return -1;
        }

        return q.front();
    }

    int size() {
        return q.size();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    ST st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    cout << "Pop: " << st.pop() << endl;
    cout << "Pop: " << st.pop() << endl;

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    return 0;
}