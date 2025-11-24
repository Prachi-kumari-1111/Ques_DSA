#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;

    int sum =0; 

    while (n>0){
        int digit = n%10;
        sum=sum + (digit*digit);
        n=n/10;
    }
cout<<"sum od squares of digits=" <<sum<< endl;

return 0;
}