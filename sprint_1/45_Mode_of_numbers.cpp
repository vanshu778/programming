//Write a program to find the mode (most frequent number) in an array.

#include <iostream>
#include <unordered_map>
using namespace std;

int findMode(int arr[], int size) {
    unordered_map<int, int> freq;
    int maxFreq = 0, mode = arr[0];

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq) { 
            maxFreq = freq[arr[i]];
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    int arr[] = {1, 2, 2, 3,3,3,3, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Mode: " << findMode(arr, size) << endl;
    return 0;
}
