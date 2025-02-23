// Write a program to find the second smallest number in an array.


#include <iostream>
#include <limits.h>
using namespace std;

int findSecondSmallest(int arr[], int n) {
    if (n < 2) return -1; 

    int smallest = INT_MAX, second_smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    return (second_smallest == INT_MAX) ? -1 : second_smallest;
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondSmallest(arr, n);
    if (result != -1)
        cout << "Second smallest number is: " << result << endl;
    else
        cout << "No second smallest number found" << endl;

    return 0;
}
