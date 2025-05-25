#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // Prime numbers are greater than 1
    for (int i = 2; i * i <= n; i++) {  // Check divisibility up to √n
        if (n % i == 0) return false;  // If divisible, it's not prime
    }
    return true;
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (isPrime (number))
    cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}