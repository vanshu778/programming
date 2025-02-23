//Write a program to check which numbers in a given range are perfect squares.

#include <iostream>
#include <vector>
#include <cmath>  // For sqrt and ceil

using namespace std;

vector<int> findPerfectSquares(int start, int end) {
    vector<int> perfectSquares;
    
    int x = ceil(sqrt(start));  // First integer whose square is ≥ start
    int y = floor(sqrt(end));   // Last integer whose square is ≤ end

    for (int i = x; i <= y; i++) {
        perfectSquares.push_back(i * i);
    }

    return perfectSquares;
}

int main() {
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;

    vector<int> result = findPerfectSquares(start, end);
    
    cout << "Perfect squares: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i < result.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}
