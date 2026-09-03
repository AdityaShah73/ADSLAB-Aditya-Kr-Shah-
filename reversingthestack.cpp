#include <bits/stdc++.h>
using namespace std;
void pushatbuttom(stack<int>&st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatbuttom(st,val);
    st.push(x);
}
void reverse(stack<int>&st) {
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushatbuttom(st,x);
}

void display(stack<int>&st) {
    if(st.size()==0) {
        return;
    }
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    //pushatbuttom(st,-10);
    reverse(st);
    display(st);
    return 0;
}