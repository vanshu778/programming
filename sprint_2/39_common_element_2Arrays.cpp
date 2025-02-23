//Write a program to find common elements between two arrays.

#include <iostream>
#include <vector>
#include <algorithm>  // For sorting

using namespace std;

vector<int> findCommonElements(vector<int>& arr1, vector<int>& arr2) {
    sort(arr1.begin(), arr1.end()); // Sort first array
    sort(arr2.begin(), arr2.end()); // Sort second array

    vector<int> common;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) { 
            // Avoid duplicates in the output
            if (common.empty() || common.back() != arr1[i]) {
                common.push_back(arr1[i]);
            }
            i++;
            j++;
        } 
        else if (arr1[i] < arr2[j]) {
            i++; // Move pointer in arr1
        } 
        else {
            j++; // Move pointer in arr2
        }
    }
    return common;
}

int main() {
    vector<int> array1 = {1, 2, 3, 4};
    vector<int> array2 = {3, 4, 5, 6};

    vector<int> result = findCommonElements(array1, array2);

    cout << "Common Elements: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
