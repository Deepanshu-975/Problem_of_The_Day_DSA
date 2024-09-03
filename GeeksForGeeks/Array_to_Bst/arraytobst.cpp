Node* sortedArrayToBST(vector<int>& nums, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    Node* root = new Node(nums[mid]);

    root->left = sortedArrayToBST(nums, start, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, end);

    return root;
}
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
       if(nums.empty())
       return nullptr;
        
    return sortedArrayToBST(nums, 0, nums.size() - 1);    
    }

/*Node Class: A class to represent a tree node.
sortedArrayToBST Function (Overloaded):

This function takes an array and start/end indices and recursively creates a BST.
It finds the middle element, creates a node, and then recursively constructs the left and right subtrees.

sortedArrayToBST Function (Wrapper):
This function calls the overloaded sortedArrayToBST function with initial indices.
preOrder Function: A helper function to print the tree in pre-order for verification.

main Function:
Creates a sorted array and constructs a BST from it.
Prints the pre-order traversal of the BST. */