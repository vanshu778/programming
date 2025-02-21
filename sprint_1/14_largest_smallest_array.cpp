//Write a program to find the largest and smallest numbers in an array.

#include <bits/stdc++.h>
using namespace std;

void largest_smallest(int arr[], int size) {
    int min_val = INT_MAX;
    int max_val = INT_MIN;  

    for (int i = 0; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    cout << "Smallest: " << min_val << endl;
    cout << "Largest: " << max_val << endl;
}

int main() {
    int arr[] = {4, 7, 1, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    largest_smallest(arr, size);
    return 0;
}
