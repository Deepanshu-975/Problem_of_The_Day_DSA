#include <bits/stdc++.h> 
using namespace std;

void generateParentheses(int open, int close, string current, vector<string>& result) {
    // Base case: if both open and close counts are zero, we've generated a valid combination
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }

    // If open count is greater than zero, we can add an open parenthesis
    if (open > 0)
        generateParentheses(open - 1, close, current + '(', result);
    
    // If close count is greater than open count, we can add a close parenthesis
    if (close > open)
        generateParentheses(open, close - 1, current + ')', result);
}

vector<string> balancedParentheses(int n) {
    vector<string> result;
    generateParentheses(n, n, "", result); // Start with equal open and close counts
    return result;
}

int main() {
    int n = 2; // Example: number of pairs of parentheses
    vector<string> combinations = balancedParentheses(n);
    for (const string& combination : combinations) {
        cout << combination << endl;
    }
    return 0;
}
