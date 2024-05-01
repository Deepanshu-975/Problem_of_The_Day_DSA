#include <string>
class Solution {
public:
 vector<vector<int>> dp;

    int solve(string &ring, string &key, int ptr, int index) {
        int n = ring.size();
        int m = key.size();

        // Base case
        if (index >= m) return 0;

        if (dp[index][ptr] != -1)
            return dp[index][ptr];

        int steps = 1e9;

        for (int i = 0; i < n; i++) {
            if (ring[i] == key[index]) {
                int distance = min(abs(i - ptr), n - abs(i - ptr)); // Minimum distance considering both clockwise and anticlockwise rotations
                steps = min(steps, distance + 1 + solve(ring, key, i, index + 1)); // Add 1 for pressing the button
            }
        }

        return dp[index][ptr] = steps;
    }

    int findRotateSteps(string ring, string key) {
        int ptr = 0;
        int index = 0;

        int n = ring.size();
        int m = key.size();
        dp.assign(m, vector<int>(n, -1)); // Adjust the size of the DP array to avoid accessing out-of-bounds elements
        return solve(ring, key, ptr, index);
    }
};

// Time Complexity (TC): O(m * n^2)
// Space Complexity (SC): O(m * n)