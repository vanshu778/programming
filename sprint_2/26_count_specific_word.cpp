//Write a program to count how many times a specific word appears in a given string.

#include <iostream>
#include <sstream>
using namespace std;

int countWordOccurrences(const string &text, const string &word) {
    stringstream ss(text);
    string temp;
    int count = 0;

    while (ss >> temp) {
        if (temp == word) {
            count++;
        }
    }
    return count;
}

int main() {
    string text, word;
    cout << "Enter the string: ";
    getline(cin, text);
    cout << "Enter the word to count: ";
    cin >> word;

    int result = countWordOccurrences(text, word);
    cout << "The word \"" << word << "\" appears " << result << " times." << endl;

    return 0;
}
