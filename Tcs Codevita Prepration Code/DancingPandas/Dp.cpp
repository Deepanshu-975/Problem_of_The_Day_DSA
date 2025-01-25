#include <iostream>
#include <vector>
#include <numeric> // For std::lcm (C++17 onwards)
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // Prevents overflow by dividing first
}

int solve(int n, vector<int>& arr) {
    int finalAns = 1; // Variable to store the LCM of all cycle lengths
    vector<bool> visited(n + 1, false); // To track visited elements (1-based index)

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) { // Process only unvisited elements
            int original = i, curr = i, cnt = 0;
            while (!visited[curr]) {
                visited[curr] = true; // Mark as visited
                curr = arr[curr - 1]; // Move to the next index
                cnt++;
            }
            finalAns = lcm(finalAns, cnt); // Update the LCM with the cycle length
        }
    }
    return finalAns;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input the array
        }
        int result = solve(n, arr);
        cout << "The result is " << result << endl;
    }
    return 0;
}
