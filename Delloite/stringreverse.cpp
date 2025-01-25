#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    string result = "", word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                result = word + (result.empty() ? "" : " ") + result; // Add word to result.
                word = ""; // Reset word.
            }
        } else {
            word += c; // Build the current word.
        }
    }
    // Add the last word if it's not empty.
    if (!word.empty()) {
        result = word + (result.empty() ? "" : " ") + result;
    }
    return result;
}

int main() {
    string input;
    getline(cin, input); // Read the input string.

    string output = reverseWords(input); // Reverse the words in the string.
    cout << output << endl; // Print the result.

    return 0;
}
