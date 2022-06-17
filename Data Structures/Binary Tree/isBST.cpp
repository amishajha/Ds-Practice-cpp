   void inorder(Node* root,vector<int>&v){
        
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        
        
    }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        
        
        
        vector<int>v;
        inorder(root,v);
        return is_sorted(v.begin(),v.end());
        
        
        
        
        
    }