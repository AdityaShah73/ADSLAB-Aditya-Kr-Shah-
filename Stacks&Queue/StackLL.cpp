#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;
    }
};
class ST{
    public:
    Node* head=NULL;
    int size=0;
    void push(int x) {
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
int pop() {
    if(head == NULL) {
        cout << "Stack Underflow\n";
        return -1;
    }

    int x = head->val;

    Node* temp = head;
    head = head->next;
    delete temp;

    size--;

    return x;
}
int top() {
    if(head == NULL) {
        cout << "Stack is Empty\n";
        return -1;
    }

    return head->val;
}
    int sizee() {
        return size;
    }
};
int main() {
    ST st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    cout<<st1.top()<<endl;
    cout<<st1.sizee()<<endl;
    st1.pop();
    st1.pop();
    st1.pop();
    cout<<st1.top()<<endl;
    
    return 0;
}