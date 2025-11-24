// Finding the Sum of Prime Numbers in a Range
// Difficulty: Medium
// Topics: Number Theory, Mathematical Computations
// Description: Write a program to calculate the sum of all prime numbers within a given range.
// Example:
// Input: range = [1, 10]
// Output: 17
// Explanation: The sum of prime numbers between 1 and 10 is 2 + 3 + 5 + 7 = 17.

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true; 
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    int sum = 0;
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {   
            sum += num;
        }
    }

cout << "Sum of prime numbers between " << start << " and " << end << " is: " << sum << endl;

 return 0;
}
