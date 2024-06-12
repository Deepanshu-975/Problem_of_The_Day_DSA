#include <vector>
#include <algorithm>
using namespace std;

long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
    // Create a vector of pairs where each pair contains the tip amounts for both waiters and the index
    vector<pair<int, pair<int, int>>> orders;
    for (int i = 0; i < n; i++) {
        orders.push_back({abs(arr[i] - brr[i]), {arr[i], brr[i]}});
    }
    
    // Sort orders based on the absolute difference of tips in descending order
    sort(orders.begin(), orders.end(), [](const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
        return a.first > b.first;
    });

    long long totalTip = 0;

    // Distribute orders based on the sorted order
    for (const auto &order : orders) {
        int tipA = order.second.first;
        int tipB = order.second.second;

        if ((tipA >= tipB && x > 0) || y == 0) {
            totalTip += tipA;
            x--;
        } else {
            totalTip += tipB;
            y--;
        }
    }

    return totalTip;
}


/*Structuring Orders: Create a vector of pairs where each pair contains the absolute difference in tips, and the respective tips for both waiters. This helps in sorting based on the impact.
Sorting Orders: Sort the orders based on the absolute difference of tips in descending order. This ensures that the most impactful decisions are made first.
Distributing Orders: Iterate through the sorted list and assign each order to the waiter who provides the higher tip, while ensuring the remaining capacities are not exceeded. 

Time Complexity: 
𝑂
(𝑛log 𝑛)
O(nlogn) due to sorting.
Space Complexity: 
𝑂(𝑛)
O(n) due to storing the pairs of orders.
*/