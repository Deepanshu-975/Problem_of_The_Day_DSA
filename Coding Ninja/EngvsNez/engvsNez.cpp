#include <vector>
#include <algorithm>
#include <climits>

int minDifference(std::vector<int> &a) {
    int n = a.size();

    // Check if the input vector is empty or contains only one element.
    if (n <= 1) {
        return 0; // There are no adjacent elements to swap.
    }

    // Sort the vector to make it easier to find the minimum difference.
    std::sort(a.begin(), a.end());

    int minDiff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int currentDiff = a[i] - a[i - 1];
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
        }
    }

    return minDiff;
}

#include <iostream>

int main() {
    std::vector<int> jerseyNumbers = {4, 7, 1, 9, 3};
    int result = minDifference(jerseyNumbers);
    std::cout << "Minimum difference for swapping adjacent jerseys: " << result << std::endl;
    return 0;
}
