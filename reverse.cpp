#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int>st,gt,rt;
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
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    while(st.size()>0) {
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}