#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    // Loop through given range
    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int sum = 0;

        // Count digits
        int digits = 0, temp = num;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        // Calculate sum of digits raised to 'digits'
        temp = num;
        while (temp > 0) {
            int lastDigit = temp % 10;
            sum += pow(lastDigit, digits);
            temp /= 10;
        }

        // Check Armstrong condition
        if (sum == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}
