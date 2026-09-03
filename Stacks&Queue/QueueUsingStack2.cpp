#include <bits/stdc++.h>
using namespace std;
class q{
    public:
    stack<int>s1,s2;
    void push(int x) {
        s1.push(x);
    }
    void pop() {
        if(s2.size()!=0) {
            s2.pop();
        }
        else {
            while((s1.size())) {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }
    int top() {
        if(s2.size()!=0) {
            return s2.top();
        }
        else {
            while(s1.size()) {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    int size() {
        return s2.size();
    }



};
int main() {
    q obj;

    obj.push(10);
    obj.push(20);
    obj.push(30);

    cout << obj.top() << endl;
    obj.pop();

    cout << obj.top() << endl;
    cout << obj.size() << endl;

    return 0;
}