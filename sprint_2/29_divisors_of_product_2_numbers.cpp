//Write a program to find all divisors of the product of two given numbers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDivisors(int num) {
    vector<int> divisors;
    
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
            if (i != num / i) {
                divisors.push_back(num / i); 
            }
        }
    }
    
    sort(divisors.begin(), divisors.end()); 
    return divisors;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = num1 * num2;
    vector<int> divisors = findDivisors(product);

    cout << "Divisors of " << product << ": ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
