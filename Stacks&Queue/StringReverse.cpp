#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<char>st1;
    string s;
    cin>>s;
    for(char ch: s) {
        st1.push(ch);
    }
    while(st1.size()>0) {
        cout<<st1.top();
        st1.pop();
    }
    return 0;
}