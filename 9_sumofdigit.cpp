#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Last digit ko add karo
        num /= 10;        // Last digit hatao
    }
    return sum;
}

int main() {
    int number = 1234; // Example input
    cout << "Sum of digits: " << sumOfDigits(number) << endl;
    return 0;
}