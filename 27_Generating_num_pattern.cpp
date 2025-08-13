#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;
    cin >> rows; // Input number of rows

    int num = 1; // Start number

    for (int i = 1; i <= rows; i++) {      // Row loop
        for (int j = 1; j <= i; j++) {     // Numbers in each row
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
