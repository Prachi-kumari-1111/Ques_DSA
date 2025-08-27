#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true; 
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    int sum = 0;
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {   
            sum += num;
        }
    }

cout << "Sum of prime numbers between " << start << " and " << end << " is: " << sum << endl;

 return 0;
}
