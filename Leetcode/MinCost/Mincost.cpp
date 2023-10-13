#include <vector>
#include <algorithm>

int minCostClimbingStairs(std::vector<int>& cost) {
    int n = cost.size();
    std::vector<int> dp(n, 0);

    // Initialize the first two steps
    dp[0] = cost[0];
    dp[1] = cost[1];

    // Calculate the minimum cost for each step
    for (int i = 2; i < n; i++) {
        dp[i] = cost[i] + std::min(dp[i-1], dp[i-2]);
    }

    // Return the minimum cost to reach the top (last or second-to-last step)
    return std::min(dp[n-1], dp[n-2]);
}

// tc : o(n)
// sc : o(n)