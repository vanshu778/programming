//Write a program to count the number of words in a given string.
#include <iostream>
#include <sstream>
using namespace std;

int countWords(const string &str) {
    stringstream ss(str);  
    string word;
    int count = 0;

    while (ss >> word) {  
        count++;
    }

    return count;
}

int main() {
    string input = "Hello world, this is a test string!";
    
    cout << "Number of words: " << countWords(input) << endl;
    return 0;
}
