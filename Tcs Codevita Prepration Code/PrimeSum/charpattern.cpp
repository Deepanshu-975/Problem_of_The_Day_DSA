#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    char ch = 'A'; // Starting character

    for (int i = 1; i <= n; i++) {
        // Print the starting character of the row
        cout << ch;

        // Print spaces for the middle part
        for (int j = 1; j <= i - 2; j++) {
            cout << " ";
        }

        // Print the ending character of the row (only if it's not the first row)
        if (i > 1) {
            cout << ch;
        }

        // Move to the next line
        cout << endl;

        // Move to the next character
        ch++;
    }

    return 0;
}
