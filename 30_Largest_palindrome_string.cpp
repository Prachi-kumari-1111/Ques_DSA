/*Finding the Largest Palindrome in a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to find the largest palindrome in a given string.
Example:
Input: string = "babad"
Output: "bab" or "aba"
Explanation: Both "bab" and "aba" are valid palindromes in the string.*/


#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        // Odd length palindrome
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > ans.size()) ans = s.substr(l, r - l + 1);
            l--; r++;
        }
        // Even length palindrome
        l = i; r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (r - l + 1 > ans.size()) ans = s.substr(l, r - l + 1);
            l--; r++;
        }
    }
    return ans;
}

int main() {
    string str = "babad";
    cout << longestPalindrome(str);
}
