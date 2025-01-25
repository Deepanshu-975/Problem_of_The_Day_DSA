#include <iostream>
using namespace std;

int main() {
    int n = 3; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }

        // Print decreasing numbers
        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num;
            num--;
        }

        cout << endl;
    }

    return 0;
}
