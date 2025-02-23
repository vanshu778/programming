//Write a program to find how many perfect numbers exist up to a given limit.

#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfect(int num) {
    int sum = 1;  // Start with 1 since it's a divisor of all numbers

    // Check divisors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {  // Add the pair divisor only if it's different
                sum += num / i;
            }
        }
    }

    return sum == num && num != 1;  // A perfect number must not be 1
}

// Function to count perfect numbers up to a given limit
int countPerfectNumbers(int limit) {
    int count = 0;

    for (int num = 2; num <= limit; num++) {
        if (isPerfect(num)) {
            count++;
            cout << num << " ";  // Print the perfect number
        }
    }
    
    return count;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "\nPerfect numbers up to " << limit << ": ";
    int result = countPerfectNumbers(limit);
    cout << "\nTotal count: " << result << endl;

    return 0;
}
