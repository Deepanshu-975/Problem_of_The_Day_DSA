#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;  // Input the number of rows and columns

    // Create a 2D vector 'mat' to store the matrix of characters
    vector<vector<char>> mat(row, vector<char>(col, '0'));

    // Read the matrix from input
    for (int i = 0; i < row; i++) {
        string s;
        cin >> s;  // Read each row as a string
        for (int j = 0; j < col; j++) {
            mat[i][j] = s[j];  // Fill the matrix with the characters
        }
    }

    // Variable to store the result (some calculated value based on conditions)
    int res = 0;

    // Traverse each column to calculate 'res' based on certain conditions
    for (int i = 0; i < col; i++) {
        int temp = row;  // Initialize temp with the row count
        for (int j = 0; j < row; j++) {
            // Check each character in the column
            if (mat[j][i] == 'C') {
                temp = row - j - 1;  // Adjust temp if 'C' is found
                break;  // Exit loop as condition met
            } else if (mat[j][i] == 'H') {
                // If 'H' is found, only update temp if it's zero
                if (temp == 0) {
                    temp = row - j;
                }
            } else if (mat[j][i] == '0') {
                temp = 0;  // Reset temp if '0' is found
            }
        }
        res += temp;  // Accumulate the result
    }

    // Count the number of 'C' characters in the entire matrix
    int coin = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] == 'C') {
                coin += 1;
            }
        }
    }

    // Output the count of 'C' characters and twice the accumulated result
    cout << coin << " " << res * 2 << endl;

    return 0;
}
