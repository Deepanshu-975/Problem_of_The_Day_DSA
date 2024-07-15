TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
         unordered_map<int, TreeNode*> nodeMap;
    unordered_map<int, bool> isChild;
    TreeNode* root = nullptr;

    for (int i = 0; i < descriptions.size(); i++) {
        int parentVal = descriptions[i][0];
        int childVal = descriptions[i][1];
        bool isLeft = descriptions[i][2] == 1;

        // Create or get the parent node
        TreeNode* parent;
        if (nodeMap.find(parentVal) == nodeMap.end()) {
            parent = new TreeNode(parentVal);
            nodeMap[parentVal] = parent;
        } else {
            parent = nodeMap[parentVal];
        }

        // Create or get the child node
        TreeNode* child;
        if (nodeMap.find(childVal) == nodeMap.end()) {
            child = new TreeNode(childVal);
            nodeMap[childVal] = child;
        } else {
            child = nodeMap[childVal];
        }

        // Link the child to the parent
        if (isLeft) {
            parent->left = child;
        } else {
            parent->right = child;
        }

        // Mark this node as a child
        isChild[childVal] = true;
    }

    // Find the root (the node which is never a child)
    for (const auto& node : nodeMap) {
        if (!isChild[node.first]) {
            root = node.second;
            break;
        }
    }

    return root;
    }

    Tc: O(N)
    Sc :O(N)