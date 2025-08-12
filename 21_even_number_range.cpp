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
        if (i % 2 == 0) { // even check
            sum += i;
        }
    }

    cout << "Sum of even numbers between " << start << " and " << end << " is: " << sum;
    return 0;
}