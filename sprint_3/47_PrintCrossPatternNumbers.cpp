// 4849494948
// 4949494949
// 4949504949
// 4949495149
// 4849494952

#include <iostream>
using namespace std;

void printCrossPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (i == j || i + j == n - 1 ? '0' + min(i, j) : '1');
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printCrossPattern(n);
    return 0;
}
