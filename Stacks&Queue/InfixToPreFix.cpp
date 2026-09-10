#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return 0;
}

bool isRightAssociative(char op) {
    return op == '^';
}

int main() {
    string Q, P;
    Q="A/B*C-D+E/F/G+H";
    reverse(Q.begin(),Q.end());
    stack<char> s;

    for (int i = 0; i < Q.size(); i++) {
        char ch = Q[i];

        if (isalnum(ch)) {
            P += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                P += s.top();
                s.pop();
            }

            if (!s.empty()) {
                s.pop();
            }
        }
        else {
            while (!s.empty() &&
                   s.top() != '(' &&
                   (precedence(s.top()) > precedence(ch) ||
                   (precedence(s.top()) == precedence(ch) &&
                    isRightAssociative(ch)))) {//impoertant 

                P += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }

    while (!s.empty()) {
        P += s.top();
        s.pop();
    }
    reverse(P.begin(),P.end());
    cout << P << endl;

    return 0;
}