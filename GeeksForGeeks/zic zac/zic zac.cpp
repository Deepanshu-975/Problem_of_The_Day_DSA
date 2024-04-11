class Solution{
    public:
    // code 1

    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	stack<Node*>s1,s2;
    	if(root)s1.push(root);
    	
    	while(!s1.empty() || !s2.empty())
    	{
    	    while(!s1.empty())
    	    {
    	        Node* temp =s1.top();
    	        ans.push_back(temp->data);
    	        s1.pop();
    	        if(temp->left)
    	        s2.push(temp->left);
    	        if(temp->right)
    	        s2.push(temp->right);
    	    }
    	    while(!s2.empty())
    	    {
    	        Node* temp =s2.top();
    	        ans.push_back(temp->data);
    	        s2.pop();
    	         if(temp->right)
    	        s1.push(temp->right);
    	        if(temp->left)
    	        s1.push(temp->left);
    	       
    	    }
    	}
    	return ans;
    }
};

// Time Complexity: O(n).
// Auxiliary Space: O(n)

// code 2
vector<int> zigZagTraversal(Node* root) {
    vector<int> ans;
    if (!root) return ans;

    stack<Node*> s1, s2;
    s1.push(root);
    bool leftToRight = true;

    while (!s1.empty() || !s2.empty()) {
        stack<Node*>& current = leftToRight ? s1 : s2;
        stack<Node*>& next = leftToRight ? s2 : s1;

        while (!current.empty()) {
            Node* temp = current.top();
            current.pop();
            ans.push_back(temp->data);

            if (leftToRight) {
                if (temp->left) next.push(temp->left);
                if (temp->right) next.push(temp->right);
            } else {
                if (temp->right) next.push(temp->right);
                if (temp->left) next.push(temp->left);
            }
        }
        leftToRight = !leftToRight;
    }
    return ans;
}
