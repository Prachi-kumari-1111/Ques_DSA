#include <iostream>
using namespace std;

void printPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter pyramid height: ";
    cin >> height;
    printPyramid(height);
    return 0;
}