class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> rootlist1 , rootlist2;
        getLeaf(root1,rootlist1);
        getLeaf(root2,rootlist2);

        return rootlist1 == rootlist2;
    }
    void getLeaf(TreeNode* node ,vector<int>& nodelst){
        if(!node) return;

        if(!node->left && !node->right){
            nodelst.push_back(node->val);
            return;
        }
        getLeaf(node->left,nodelst);
        getLeaf(node->right,nodelst);
    }
};

// tc : o(n+m)
// sc : o(n+m) 