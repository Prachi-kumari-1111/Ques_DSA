#include <bits/stdc++.h>
using namespace std;

// Prime check function
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime numbers less than " << number << " are: ";
    for (int i = 2; i < number; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
