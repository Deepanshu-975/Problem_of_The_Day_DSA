#include <string>
#include <algorithm> // for std::reverse
using namespace std;

string reverseParentheses(string s) {
    int n = s.size();
    while (true) {
        int open = -1;
        // Find the innermost opening parenthesis
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                open = i;
            }
            // Find the corresponding closing parenthesis
            else if (s[i] == ')' && open != -1) {
                // Reverse the substring inside the parentheses
                reverse(s.begin() + open + 1, s.begin() + i);
                // Remove the parentheses
                s.erase(s.begin() + i);
                s.erase(s.begin() + open);
                break;
            }
        }
        // If no opening parenthesis was found, the work is done
        if (open == -1) break;
    }
    return s;
}


// Approch 
// :Find the innermost parentheses: The code iterates through the string to find the innermost opening ( and its corresponding closing ).
// Reverse the substring: Once it finds a pair of parentheses, it reverses the substring between them using std::reverse.
// Remove the parentheses: After reversing, the code removes the parentheses.
// Repeat: The process repeats until no more parentheses are found.

Tc :O(n^2)
Sc :O(1)