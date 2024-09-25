Approach 1: 
Tc :O(n * m*m)
Sc :O(n+M)

 vector<int> sumPrefixScores(vector<string>& words) {
    int n = words.size();
    vector<int> ans(n, 0);

    // Traverse each word to calculate its prefix score
    for (int i = 0; i < n; ++i) {
        string prefix = "";
        int cnt = 0;

        // Build prefix one character at a time
        for (int j = 0; j < words[i].size(); ++j) {
            prefix += words[i][j];

            // Compare this prefix with the prefixes of all other words
            for (int k = 0; k < n; ++k) {
                if (words[k].substr(0, j + 1) == prefix) {
                    cnt++;
                }
            }

            // Increment the score for the current word
            ans[i] += cnt;
            cnt = 0;  // Reset the count for the next prefix
        }
    }

    return ans;
}