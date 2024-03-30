 int minValue(Node* root) {
         if (root == nullptr) {
        return INT_MAX;
    }
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            Node* temp =q.front();
            q.pop();
            
            ans.push_back(temp->data);
            
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        
        int mini =INT_MAX;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]<mini)
            mini =ans[i];
        }
        return mini;
    }

    // Tc:o(n)
    // sc:o(n)

    // using recursion
    // Tc:o(n)
    // sc:o(1)

     int minValue(Node* root) {
          if(root==NULL) return -1;
        if(root->left==NULL) return root->data;
        
        //left
        return minValue(root->left);
    }