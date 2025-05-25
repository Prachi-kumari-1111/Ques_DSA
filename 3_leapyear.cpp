#include <iostream>
using namespace std;

bool isLeapyear(int year){
    if ((year%4==0 && year %100!=0)||(year%400==0)){
        return true;
    } else
        {
            return false;
        }
}

int main(){
    int year;
    cout<<"Enter a year:";
    cin>>year;

if(isLeapyear(year)){
    cout<<year<<"is a Leap year"<<endl;
}
else{
    cout<<year<<"is Not a Leap year"<<endl;
}
return 0;
}



