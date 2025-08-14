/*Checking if a Number is a Narcissistic Number
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is a narcissistic number (where the sum of its digits raised to the power of the number of digits equals the number itself).
Example:
Input: number = 153
Output: Narcissistic Number
Explanation: 153 is a narcissistic number because 1^3 + 5^3 + 3^3 = 153.*/


#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num, originalNum, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == originalNum)
        cout << "Narcissistic Number" << endl;
    else
        cout << "Not a Narcissistic Number" << endl;

    return 0;
}
