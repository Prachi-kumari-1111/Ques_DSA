#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int vowel_count=0;
    int consonant_count=0;

    getline(cin,str);

    for(int i= 0;i < str.length(); i++) {
    char ch = str[i]; //charcter to uuthaya

    if (isalpha(ch)) { 
    ch = tolower(ch); //to convert big lettter into small
        if (ch == 'a' ||ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        vowel_count++;
    } else consonant_count++;
}
}
cout<<"vowels:"<<vowel_count<<endl;
cout<<"vowels:"<<consonant_count<<endl;
return 0;
}