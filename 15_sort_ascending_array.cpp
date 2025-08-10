#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={3,1,4,1,5,9};
    int n=6;

    sort (arr,arr +n);

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

return 0;
}
