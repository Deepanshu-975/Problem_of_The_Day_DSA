bool canArrange(vector<int>& arr, int k) {
    unordered_map<int, int> remainderCount;

    // Count frequencies of remainders
    for (int num : arr) {
        int remainder = ((num % k) + k) % k; // Normalize to always get positive remainders
        remainderCount[remainder]++;
    }

    // Check pairs
    for (int num : arr) {
        int remainder = ((num % k) + k) % k;
        
        // Case 1: If remainder is 0, we need even occurrences
        if (remainder == 0) {
            if (remainderCount[remainder] % 2 != 0) {
                return false;
            }
        }
        // Case 2: If remainder is k/2 (for even k), we also need even occurrences
        else if (2 * remainder == k) {
            if (remainderCount[remainder] % 2 != 0) {
                return false;
            }
        }
        // Case 3: Otherwise, we need matching pairs with k - remainder
        else {
            if (remainderCount[remainder] != remainderCount[k - remainder]) {
                return false;
            }
        }
    }

    return true;
}

// Time complexity: O(n), where 𝑛 n is the size of the array.
// Space complexity:O(k), as we store remainders in the map.

// Optimized Approach:
// Calculate the remainder of each element when divided by k.
// For each element with remainder r, find another element with remainder k - r to form a valid pair.
// Handle special cases like when the remainder is 0 or when it's exactly half of k.
// Plan:
// Use a hash map (or array) to store the frequency of remainders.
// Traverse the array, calculate the remainder of each element, and check if it can form a valid pair.
// If possible, decrease the count of the remainder and its corresponding complemen