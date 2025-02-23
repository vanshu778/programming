//Write a program to find the length of the longest word in a given string.

#include <iostream>
#include <sstream>  
using namespace std;

int findLongestWordLength(string str) {
    stringstream ss(str);  
    string word;
    int maxLength = 0;

    while (ss >> word) { 
        maxLength = max(maxLength, (int)word.length());
    }

    return maxLength;
}

int main() {
    string str = "Find the longest word";
    cout << findLongestWordLength(str) << endl;
    return 0;
}
