#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << ": ";
    
    if (n >= 0) cout << first << " "; 
    if (n >= 1) cout << second << " ";

    next = first + second;
    while (next <= n) {
        cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    generateFibonacci(n);
    return 0;
}