#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    int result = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    cout << base << " raised to the power " << exponent << " is " << result << endl;

    return 0;
}
