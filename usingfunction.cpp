#include <bits/stdc++.h>
using namespace std;

void pushatbuttom(stack<int>&st,int tar){
    stack<int>gt;
    while(st.size()>0) {
        gt.push(st.top());
        st.pop();
    }
    st.push(tar);
    while(gt.size()>0) {
        st.push(gt.top());
        gt.pop();
    }
}
void pushatidx(stack<int>&st,int idx,int tar){
    stack<int>gt;
    while(st.size()>idx) {
        gt.push(st.top());
        st.pop();
    }
    st.push(tar);
    while(gt.size()>0) {
        st.push(gt.top());
        gt.pop();
    }
}
void print(stack<int> st) {
    stack<int>temp;
    while(st.size()>0) {
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0) {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main() {
    stack<int>st,gt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushatbuttom(st,60);
    print(st);
    pushatidx(st,2,70);
    print(st);
    return 0;
}