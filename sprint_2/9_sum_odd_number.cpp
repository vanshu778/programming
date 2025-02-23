//Write a program to calculate the sum of the first N odd numbers.

#include <iostream>
using namespace std;

int sum_odd(int n) {
    int sum = 0, count = 0, num = 1;

    while (count < n) {  // Generate first N odd numbers
        sum += num;
        num += 2;  // Move to the next odd number
        count++;
    }

    return sum;  // Return the computed sum
}

int main() {
    int n;
    cout << "Enter the number of odd numbers to sum: ";
    cin >> n;

    cout << "Sum of first " << n << " odd numbers: " << sum_odd(n) << endl;
    return 0;
}
