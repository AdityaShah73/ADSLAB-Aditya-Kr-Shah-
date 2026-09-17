#include<bits/stdc++.h>
using namespace std ;
const int MAX = 100 ;
struct Node{
    int data;
    int priority ;
};
Node pq[MAX];
int n = 0 ;
void array_insert(int i , Node x){
    for(int j = n-1 ; j>=i ; j--){
        pq[j+1] = pq[j];
    }
    pq[i]=x;
}
Node array_delete(int i ){
    Node val = pq[i];
    for(int j = i ; j<n-1 ; j++){
        pq[j] = pq[j+1];
    }
    return val ;
}

void enque(int data , int P){
    if(n==MAX){
        cout << "Priority Queue is full" << endl ;
        return ;
    }
    Node x ; 
    x.data = data ;
    x.priority = P ;
    int i = 0;
    for(i ; i<n ; i++){
        if(P<pq[i].priority){
            break ;
        }
    }
    array_insert(i,x);
    n++ ;
    cout << "Inserted successfully" << endl ;

}
void dequeue() {
    if (n == 0) {
        cout << "Priority Queue is empty" << endl;
        return;
    }

    Node val = array_delete(0);
    n--;

    cout << "Deleted: " << val.data
         << " (Priority: " << val.priority << ")" << endl;
}

void display() {
    if (n == 0) {
        cout << "Priority Queue is empty" << endl;
        return;
    }

    cout << "\nPriority Queue:\n";

    for (int i = 0; i < n; i++) {
        cout << "Data: " << pq[i].data
             << "  Priority: " << pq[i].priority << endl;
    }
}

int main() {
    enque(10, 3);
    enque(20, 1);
    enque(30, 2);
    enque(40, 1);

    display();

    dequeue();

    display();

    return 0;
}