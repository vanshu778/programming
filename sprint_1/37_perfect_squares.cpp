//Write a program to determine if a number is a perfect square.

#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);  
    return root * root == num;  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
