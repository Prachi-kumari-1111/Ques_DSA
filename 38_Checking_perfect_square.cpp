// Checking for Perfect Squares
// Difficulty: Easy
// Topics: Mathematical Computations
// Description: Write a program to determine if a number is a perfect square.
// Example:
// Input: number = 16
// Output: True
// Explanation: 16 is a perfect square (4^2 = 16).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPerfectSquare = false;

    for (int i = 1; i <= n; i++) {
        if (i * i == n) {
            isPerfectSquare = true;
            break;
        }
    }

    if (isPerfectSquare)
        cout << n << " is a Perfect Square." << endl;
    else
        cout << n << " is NOT a Perfect Square." << endl;

    return 0;
}
