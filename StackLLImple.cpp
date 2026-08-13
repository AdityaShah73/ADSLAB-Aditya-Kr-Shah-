#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int info;
    Node* next;
    Node(int i) {
        info=i;
        next=NULL;
    }
};
void push(Node* &top,int item) {
    Node*temp= new Node(item);
    temp->next=top;
    top=temp;
    cout<<item<<"pushed into stack\n";
}
int pop(Node* &top) {
    if(top==NULL) {
        cout<<"Underflow\n";
        return -1;
    }
    Node* temp=top;
    int item=temp->info;
    top=top->next;
    delete temp;
    cout<<item<<"Pop From Stack\n";
    return item;

}
int peek(Node* top) {
    if(top==NULL) {
        cout<<"Stack Is Empty\n";
        return-1;
    }
    return top->info;
}
void traverse(Node* top) {
    cout<<"Stack :";
    Node* temp= top;
    while(temp!=NULL) {
        cout<<temp->info<<" ->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main() {
    Node* top=NULL;
    push(top,10);
    push(top,20);
    traverse(top);
    push(top,220);
    push(top,230);
    traverse(top);
    cout<<"Top element is"<<peek(top)<<"\n";
    pop(top);
    traverse(top);
    pop(top);
    traverse(top);
    return 0;
}