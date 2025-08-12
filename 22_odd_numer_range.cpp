#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    int sum = 0;

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) { // odd check
            sum += i;
        }
    }

    cout << "Sum of odd numbers between " << start << " and " << end << " is: " << sum;

    return 0;
}
