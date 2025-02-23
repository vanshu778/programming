//Write a program to find the GCD (Greatest Common Divisor) of an array of numbers.
#include <iostream>
#include <vector>
using namespace std;

// Function to find GCD of two numbers using the Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find GCD of multiple numbers
int findGCD(vector<int>& arr) {
    int result = arr[0]; // Initialize with the first element
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);  // Compute GCD iteratively
        if (result == 1) return 1;     // GCD of 1 means no common factors
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "GCD of the given numbers: " << findGCD(arr) << endl;
    return 0;
}
