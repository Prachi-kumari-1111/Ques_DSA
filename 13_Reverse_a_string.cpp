#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="programming";
    string reversed="";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i]; 
    }
    cout<<reversed;
    return 0;
}