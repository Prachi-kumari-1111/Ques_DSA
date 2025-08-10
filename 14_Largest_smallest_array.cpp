#include <iostream>
using namespace std;
int main(){
    int arr[]={9,6,4,1,7};
    int n=5;

    int largest=arr[0];
    int smallest=arr[0];

     for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {       
            largest = arr[i];         
        }
        if (arr[i] < smallest) {      
            smallest = arr[i];        
        }
    }

    cout << "Largest: " << largest << ", Smallest: " << smallest;
    return 0;
}
