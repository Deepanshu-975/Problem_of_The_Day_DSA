#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of columns (and rows for a square)

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            // Print full row of numbers for the first and last row
            for (int j = 1; j <= n; j++) {
                cout << j;
            }
        } else {
            // Print '1', spaces, and '1' for middle rows
            cout << 1; // Starting '1'
            for (int j = 1; j <= n - 2; j++) {
                cout << " "; // Spaces in the middle
            }
            cout << 1; // Ending '1'
        }
        cout << endl;
    }

    return 0;
}
