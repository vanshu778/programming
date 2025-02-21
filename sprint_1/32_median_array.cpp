//Write a program to find the median of an array of numbers.

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

double findMedian(vector<int> &arr) {
    sort(arr.begin(), arr.end()); 
    int n = arr.size();

    if (n % 2 == 1) {
        return arr[n / 2]; 
    } else {
        return (arr[n / 2] + arr[n / 2 - 1]) / 2.0; 
    }
}

int main() {
    vector<int> arr = {3, 1, 2, 4, 5, 6};
    cout << "Median: " << findMedian(arr) << endl;
    return 0;
}
