// Generating a Pascal’s Triangle
// Difficulty: Medium
// Topics: Arrays, Mathematical Computations
// Description: Write a program to generate Pascal's Triangle up to a given number of rows.
// Example:
// Input: rows = 4
// Output:


#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows:";
    cin >> rows;

    for (int i=0; i<rows; i++){
        int num=1;
        for(int j=0; j<=i; j++){
            cout<< num << " ";
           num = num * (i - j) / (j + 1);
        }
        cout<<endl;
    }
    return 0;
}