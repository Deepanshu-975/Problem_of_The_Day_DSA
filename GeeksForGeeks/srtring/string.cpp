#include <vector>
#include <string>
#include <algorithm> // for sort function
#include <cmath>     // for pow function
using namespace std;

vector<string> AllPossibleStrings(string s) {
    int n = s.length(); // Length of the input string
    vector<string> result; // Vector to store all possible strings

    // Total number of possible subsets is 2^n
    int bit_string = pow(2, n);

    // Iterate through all possible subsets
    for (int i = 1; i < bit_string; i++) {
        // Construct current string for this subset
        string a = {};

        // Check each bit of the integer i to determine inclusion of characters
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                a += s[j]; // Include character if corresponding bit is set
            }
        }

        // Add the constructed string to the result vector
        result.push_back(a);
    }

    // Sort the result vector alphabetically
    sort(result.begin(), result.end());

    // Return the vector containing all possible strings
    return result;
}

int main() {
    // Input string
    string input = "abc";

    // Get all possible strings
    vector<string> possibleStrings = AllPossibleStrings(input);

    // Print all possible strings
    for (const auto& str : possibleStrings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
