/*Finding the Sum of the Digits of the Factorial of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to find the sum of the digits of the factorial of a given number.
Example:
Input: number = 4
Output: 9
Explanation: The factorial of 4 is 24, and the sum of the digits (2 + 4) is 6.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long factorial = 1; 
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    int sum = 0;
    long long temp = factorial;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;    
    }

    cout << "Factorial of " << n << " is " << factorial << endl;
    cout << "Sum of digits of factorial: " << sum << endl;

    return 0;
}