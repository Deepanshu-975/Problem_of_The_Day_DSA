 string largestGoodInteger(string s) {
    int n = s.size();
    string ans = "";
    
    for (int i = 0; i < n - 2; ++i) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            string candidate = s.substr(i, 3);
            if (candidate > ans) {
                ans = candidate;
            }
        }
    }
    
    return ans;
}


/* tc : O(n)
// sc : O(1)
Explanation of changes made:

Used a for loop to iterate through the string up to the third-to-last character (to ensure substrings of length 3 can be checked).
Checked if three consecutive characters are equal (s[i] == s[i + 1] && s[i + 1] == s[i + 2]).
Created a substring of length 3 (s.substr(i, 3)) when the condition was met.
Compared the obtained substring with the current ans and updated ans if the new substring is greater lexically (since we're looking for the largest substring).
Finally, returned the ans string containing the largest substring of length 3 consisting of only one unique digit.
*/