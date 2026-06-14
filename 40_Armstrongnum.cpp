#include <iostream>
using namespace std;

int main() {
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number";
    else
        cout << original << " is not an Armstrong Number";

    return 0;
}