#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<char>st;
    string s;
    cin>>s;
    for(char ch:s) {
        st.push(ch);
    }
    for(char ch:s) {
        if(ch!=st.top()){
            cout<<"Not Pallindrome"<<endl;
            return 0;
        }
        st.pop();

    }
    cout<<"Pallindrome"<<endl;
    return 0;
}