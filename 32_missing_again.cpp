#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n, size;
    cin >> n >> size;   // pehle n aur sequence ki size lo

    vector<int> seq(size);
    for (int i = 0; i < size; i++) {
        cin >> seq[i];  // user input sequence
    }

    vector<int> missing;

    for (int i = 1; i <= n; i++) {
        if (find(seq.begin(), seq.end(), i) == seq.end()) {
            missing.push_back(i);
        }
    }

    for (int x : missing) cout << x << " ";
    return 0;
}
