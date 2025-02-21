#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

void findArmstrongInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int start = 1, end = 500;
    cout << "Armstrong numbers between " << start << " and " << end << " are: ";
    findArmstrongInRange(start, end);
    return 0;
}
