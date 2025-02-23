//Write a program to calculate the difference between the sum of even and odd numbers in an array.

#include <iostream>
#include <vector>
using namespace std;

int differenceEvenOddSum(vector<int>& arr) {
    int evenSum = 0, oddSum = 0;

    for (int num : arr) {
        if (num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;
    }

    return abs(evenSum - oddSum); // Absolute difference
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6};

    cout << "Difference: " << differenceEvenOddSum(array) << endl;

    return 0;
}
