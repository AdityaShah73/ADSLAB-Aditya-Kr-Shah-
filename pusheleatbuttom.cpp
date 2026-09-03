#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int>st,gt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0) {
        int x=st.top();
        st.pop();
        gt.push(x);
    }
    st.push(70); // buttom eleemnts pushed
    while(gt.size()>0) {
        st.push(gt.top());
        gt.pop();
    }
    while(st.size()>0) {
        cout<<st.top()<<" ";
        st.pop();
    }
}