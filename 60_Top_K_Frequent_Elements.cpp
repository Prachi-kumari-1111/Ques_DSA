#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    unordered_map<int,int> freq;

    for(int x : nums)
        freq[x]++;

    priority_queue<pair<int,int>> pq;

    for(auto it : freq)
        pq.push({it.second, it.first});

    while(k--) {
        cout << pq.top().second << " ";
        pq.pop();
    }

    return 0;
}