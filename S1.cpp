#include <bits/stdc++.h>
using namespace std;

int n = 5;
int s[5];
int top = -1;

bool isEmpty() {
    return top <= -1;
}

bool isFull() {
    return top >= n - 1;
}

void push(int ITEM) {
    if (isFull()) {
        cout << "Overflow" << endl;
    }
    else {
        top++;
        s[top] = ITEM;
        cout << ITEM << " inserted successfully." << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Underflow" << endl;
    }
    else {
        cout << "Deleted element is: " << s[top] << endl;
        top--;
    }
}

void Traverse() {
    if (!isEmpty()) {
        cout << "Stack elements are:" << endl;

        for (int i = top; i >= 0; i--) {
            cout << s[i] << " ";
        }

        cout << endl;
        cout << "Top Element is: " << s[top] << endl;
    }
    else {
        cout << "Stack is empty" << endl;
    }
}

int main() {

    int ch, ITEM;

    do {
        cout << "\n----- STACK MENU -----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Traverse" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {

            case 1:
                cout << "Enter ITEM: ";
                cin >> ITEM;
                push(ITEM);
                break;

            case 2:
                pop();
                break;

            case 3:
                Traverse();
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (ch != 4);

    return 0;
}