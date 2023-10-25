#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> largestValues(TreeNode* root) {
    if (root == nullptr) {
        return vector<int>{};
    }

    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int currentLength = q.size();
        int currMax = INT_MIN;

        for (int i = 0; i < currentLength; i++) {
            TreeNode* node = q.front();
            q.pop();
            currMax = max(currMax, node->val);

            if (node->left) {
                q.push(node->left);
            }

            if (node->right) {
                q.push(node->right);
            }
        }

        ans.push_back(currMax);
    }

    return ans;
}

int main() {
    // Create a simple binary tree for testing
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);

    // Call the function and print the result
    vector<int> result = largestValues(root);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up memory by deleting the tree nodes (not necessary for the main purpose of the code)
    delete root->left->left;
    delete root->left->right;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
