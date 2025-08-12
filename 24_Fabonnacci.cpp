#include <bits/stdc++.h>
using namespace std;

long long fib(long long position) {
    if (position == 0) return 0;
    if (position == 1) return 1;
    long long a = 0, b = 1;
    for (long long i = 2; i <= position; ++i) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    long long pos = 5;
    cout << "Fibonacci at position " << pos << " is " << fib(pos) << '\n';
    return 0;
}
