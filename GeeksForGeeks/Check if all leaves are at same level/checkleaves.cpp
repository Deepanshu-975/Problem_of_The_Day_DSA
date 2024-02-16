class Solution{
  private :
  int maxHeight(Node *root)
  {
      if(root == nullptr)
        return 0;
        
        int rightHeight =maxHeight(root->right);
        int leftHeight = maxHeight(root->left);
        
        return max( rightHeight,leftHeight)+1;
  }
  
   int minHeight(Node *root)
  {
      if(root == nullptr)
        return 0;
        
        int leftHeight = minHeight(root->left);
        int rightHeight =minHeight(root->right);
        
        if(leftHeight == 0 || rightHeight == 0)
        return leftHeight+rightHeight+1;
        
        return min(leftHeight , rightHeight)+1;
  }
  
  public:
    
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        if(maxHeight(root) == minHeight(root))
        return true;
        
        return false;
    }
};

// Tc : O(n)
// Sc : O(log n) or o(n) based on the senerio