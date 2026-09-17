#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, char A, char B,char C){
    if(n==1) {
        cout<<"Move disk 1 from"<< A << "to" << C <<endl;
        return;
    }
    hanoi(n-1,A,C,B);
    cout<<"Move disk 0"<< n <<" from "<< A << "to" << C << endl;
    hanoi(n-1,B ,A,C) ;
}
int main() {
    int n;
    
    
    return 0;
}