  // 1 approch solve it by using inorder tarversal 
void Inorder(Node*root ,vector<int>&ans)
     {
        if(!root)
        return ;
        
        Inorder(root->left,ans);
        ans.push_back(root->data);
        Inorder(root->right,ans);
    }
   int absolute_diff(Node *root)
{
   vector<int>ans;
   Inorder(root,ans);
   
   int mini =INT_MAX;
   for(int i=0;i<ans.size()-1;i++)
   {
       int diff =ans[i] - ans[i+1];
       mini =min(mini,abs(diff));
   }
   return mini;
}

// tc:o(n)
// sc:o(1)
