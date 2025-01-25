#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxCoins(int n, int arr[]) {
    if (n == 0) return 0; // No jars, no coins.
    if (n == 1) return arr[0]; // Only one jar, take its coins.

    // Initialize dp array
    vector<int> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    // Fill the dp array using the recurrence relation
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }

    // The last element in dp array contains the maximum coins
    return dp[n - 1];
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxCoins(n, arr);
    cout << result << endl;

    return 0;
}
