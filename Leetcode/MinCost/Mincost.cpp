#include <vector>
#include <algorithm>

// approch1 
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


// approch 2
 int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev1 = 0, prev2 = 0;

        for (int i = 2; i <= n; i++) {
            int current_cost = min(prev1 + cost[i - 1], prev2 + cost[i - 2]);
            prev2 = prev1;
            prev1 = current_cost;
        }

        return prev1;
    }

    // tc : o(n)
    // sc : o(1)