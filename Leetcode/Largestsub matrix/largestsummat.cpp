// Time Complexity: O(m * n * log n)
// Space Complexity: O(n)

int largestSubmatrix(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> one(n, 0);
    int max_area = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                one[j]++;
            } else {
                one[j] = 0;
            }
        }

        vector<int> helper = one;
        sort(helper.begin(), helper.end(), std::greater<int>());

        for (int j = 0; j < n; j++) {
            if (helper[j] > 0) {
                max_area = max(max_area, (j + 1) * helper[j]);
            }
        }
    }
    return max_area;
}
