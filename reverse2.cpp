#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    vector<int> v;

    while (st.size() > 0) {
        v.push_back(st.top());
        st.pop();
    }

    for (int i = 0; i < v.size(); i++) {
        st.push(v[i]);
    }

    while (st.size() > 0) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}