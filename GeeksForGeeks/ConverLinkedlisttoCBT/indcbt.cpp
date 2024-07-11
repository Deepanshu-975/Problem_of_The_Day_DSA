 void convert(Node *head, TreeNode *&root) {
        queue<TreeNode *>q;
        
        // base case 
        if(head == NULL)
        {
            root= NULL;
            return;
        }
        
        root =new TreeNode(head->data);
        q.push(root);
        
        head =head->next;
        
        while(head){
            TreeNode * temp =q.front();
            q.pop();
            
            TreeNode* leftT =NULL;
            TreeNode* rightT =NULL;
            leftT =new TreeNode(head->data);
            
            q.push(leftT);
            head =head->next;
            
            if(head){
                rightT =new TreeNode(head->data);
                
                q.push(rightT);
                head = head->next;
            }
            
            temp->left =leftT;
            temp->right=rightT;
        }
    }

    // Tc:O(n)
    // Sc:O(n)