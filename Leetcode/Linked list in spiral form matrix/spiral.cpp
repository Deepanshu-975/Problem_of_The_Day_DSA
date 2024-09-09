int getValue(ListNode* &head) {
    int val = -1;  // Default value if no more nodes are left
    if (head) {    // If the current ListNode exists
        val = head->val;  // Get the current node's value
        head = head->next;  // Move to the next node
    }
    return val;  // Return the value (either the node's value or -1)
}

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    vector<vector<int>> ans(m, vector<int>(n, -1));

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            ans[top][i] = getValue(head);
        }
        top++;  // Move the top boundary down

        // Traverse from top to bottom along the rightmost column
        for (int i = top; i <= bottom; i++) {
            ans[i][right] = getValue(head);
        }
        right--;  // Move the right boundary left

        // Traverse from right to left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans[bottom][i] = getValue(head);
            }
            bottom--;  // Move the bottom boundary up
        }

        // Traverse from bottom to top along the leftmost column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans[i][left] = getValue(head);
            }
            left++;  // Move the left boundary right
        }
    }

    return ans;
}

// Tc:O(M*N)
// Sc :O(M*N)