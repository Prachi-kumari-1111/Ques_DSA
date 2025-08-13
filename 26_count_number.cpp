#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    // Agar number negative hai to positive bana lo
    if (number < 0) {
        number = -number;
    }

    // Special case: number = 0
    if (number == 0) {
        cout << "Number of digits: 1\n";
        return 0;
    }

    int count = 0;
    while (number > 0) {
        number = number / 10; // last digit remove
        count++;
    }

    cout << "Number of digits: " << count << "\n";
    return 0;
}
