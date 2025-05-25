#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>> n;
    if(n%2==0){
        cout<<"Even number";
        cin>>n;
    }
    else{
        cout<<"odd number";
        cout<<"part of else";
    }
}