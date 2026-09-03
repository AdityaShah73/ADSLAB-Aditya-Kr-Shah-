#include <bits/stdc++.h>
using namespace std;
class Q{
    public:
    int size=10;
    int Q[10];
    int start=-1;
    int end=-1;
    int currsize=0;

    void push(int x) {
        if(currsize==size) {
            cout<<"Queue Overflow \n"<<endl;
            return;
        }
        if(currsize==0) {
            start=end=0;
        }
        else {
            end=(end+1)%size;
        }
        currsize+=1;
        Q[end]=x;
    }
    int pop() {
        if(currsize==0) {
            cout<<"Queue Underflow\n"<<endl;
            return -1;
        }
        int el=Q[start];
        if(currsize==1) {
            start=end=-1;
        }
        else {
            start=(start+1)%size;
        }
        currsize-=1;
        return el;

    }
    int top() {
        return Q[start];
    }
    int sizee() {
        return currsize;
    }

};
int main() {
    Q q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    cout<<q1.top()<<endl;
    q1.pop();
    q1.pop();
    cout<<q1.top()<<endl;
    
    return 0;
}