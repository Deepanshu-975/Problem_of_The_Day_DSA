<<<<<<< HEAD
class Solution
{
    public:

  void countSpecial(Node* root, int k,set<int>&s,int i, int depth) {
   
    if (root == NULL) {
        return;
    }
    
   
    if ((root->left == NULL && root->right == NULL) && i==k) {
       
     s.insert(depth);
     
    }
    countSpecial(root->left,k,s,i+1,depth);
     countSpecial(root->right,k,s,i+1,depth);
  }

  

int printKDistantfromLeaf(Node* root, int k) {
    
    set<int>s;
    if(root == nullptr)
    return s.size();
    
    countSpecial(root,k,s,0,root->data);
    
    int left = printKDistantfromLeaf(root->left,k);
    int right = printKDistantfromLeaf(root->right,k);
    
    return s.size()+left +right;
}

=======
class Solution
{
    public:

  void countSpecial(Node* root, int k,set<int>&s,int i, int depth) {
   
    if (root == NULL) {
        return;
    }
    
   
    if ((root->left == NULL && root->right == NULL) && i==k) {
       
     s.insert(depth);
     
    }
    countSpecial(root->left,k,s,i+1,depth);
     countSpecial(root->right,k,s,i+1,depth);
  }

  

int printKDistantfromLeaf(Node* root, int k) {
    
    set<int>s;
    if(root == nullptr)
    return s.size();
    
    countSpecial(root,k,s,0,root->data);
    
    int left = printKDistantfromLeaf(root->left,k);
    int right = printKDistantfromLeaf(root->right,k);
    
    return s.size()+left +right;
}

>>>>>>> 24694c16372f1391a6ccdfdcb19b9d545dabcfe5
};