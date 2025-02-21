// Write a program to find the largest palindrome in a given string.

#include <iostream>
using namespace std;

string expandFromCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    
    string longest = "";
    
    for (int i = 0; i < s.length(); i++) {
        // Check for odd-length palindrome
        string oddPalindrome = expandFromCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        // Check for even-length palindrome
        string evenPalindrome = expandFromCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }
    
    return longest;
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
