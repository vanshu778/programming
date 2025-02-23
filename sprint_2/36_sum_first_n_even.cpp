//Write a program to calculate the sum of the first N even numbers.
// #include <iostream>
// using namespace std;

// int sumEvenNumbers(int N) {
//     int sum = 0;
//     for (int i = 1; i <= N; i++) {
//         sum += 2 * i;  // Add even numbers (2, 4, 6, ...)
//     }
//     return sum;
// }

// int main() {
//     int N;
//     cout << "Enter N: ";
//     cin >> N;
    
//     cout << "Sum of first " << N << " even numbers: " << sumEvenNumbers(N) << endl;
//     return 0;
// }


//using formula

#include <iostream>
using namespace std;

int sumEvenNumbers(int N) {
    return N * (N + 1);  // Direct formula
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    cout << "Sum of first " << N << " even numbers: " << sumEvenNumbers(N) << endl;
    return 0;
}
