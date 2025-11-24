/*Finding Missing Numbers in a Sequence
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find missing numbers in a sequence from 1 to n.
Example:
Input: sequence = [1, 2, 4, 5]
Output: [3]
Explanation: The missing number in the sequence from 1 to 5 is 3.*/

#include <iostream>
#include <vector>
#include <algorithm> // for find()

using namespace std;

int main() {
    vector<int> seq = {1, 2, 4, 5};
    int n = 5; 

    vector<int> missing;

    for (int i = 1; i <= n; i++) {
        if (find(seq.begin(), seq.end(), i) == seq.end()) {
            missing.push_back(i);
        }
    }

    cout << "Missing numbers: ";
    for (int x : missing) cout << x << " ";
    return 0;
}