#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;
    
    // Count number of digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of digits
    temp = originalNum;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}