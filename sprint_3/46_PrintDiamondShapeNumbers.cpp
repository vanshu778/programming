//   1
//  121
// 12321
//  121
//   1
#include <iostream>
using namespace std;

void printDiamondNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }
}

int main() {
    int n = 3;
    printDiamondNumbers(n);
    return 0;
}
