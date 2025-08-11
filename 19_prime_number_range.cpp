#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return false;
        }
    }
    return true; 
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    return 0;
}
