#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;

    // Proper divisors ka sum nikalna
    for (int i = 1; i <= num / 2; i++) {  // num/2 tak check karna kaafi hai
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number
    if (sum == num) {
        cout << num << " is a Perfect Number";
    } else {
        cout << num << " is NOT a Perfect Number";
    }

    return 0;
}
