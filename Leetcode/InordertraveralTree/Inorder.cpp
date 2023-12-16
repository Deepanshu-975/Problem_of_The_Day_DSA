#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

// tc : o(n);
// sc : o(n);
void inorderHelper(TreeNode* root, vector<int> &ans) {
    if (root == nullptr)
        return;

    inorderHelper(root->left, ans);
    ans.push_back(root->val); // Accessing 'val' instead of 'data'
    inorderHelper(root->right, ans);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    inorderHelper(root, ans);
    return ans;
}
