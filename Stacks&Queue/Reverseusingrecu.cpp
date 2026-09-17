#include <iostream>
using namespace std;

void reverseNumber(int n, int &rev) {
    if (n == 0)
        return;

    int digit = n % 10;
    rev = rev * 10 + digit;

    reverseNumber(n / 10, rev);
}

int main() {
    int n;
    int rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n, rev);

    cout << "Reversed number: " << rev;

    return 0;
}