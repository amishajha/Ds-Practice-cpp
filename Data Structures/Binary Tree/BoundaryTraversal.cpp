//Boundary Traversal
//ALGO
//print left part except leaf node
//leaf node(l to r)
//right part ()

void traverseLeft(Node* root,vector<int>&ans){
   
   if((root==NULL )||(root->left==NULL && root->right==NULL))
   return;

   ans.push_back(root->data);
   if(root_->left)
   traverseLeft(root->left,ans);
   else
   traverseLeft(root->right,ans);


   


}


void traverseLeaf(Node* root,vector<int>&ans){

if(root==NULL){
    return;
}
if(root->left==NULL && root->right==NULL){
    ans.push_back(root->data);
    return;

}

traverseLeaf(root->left,ans);



}

void traverseRight(Node* root,vector<int>&ans){
    if((root==NULL)||(root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->right)
    traverseRight(root->right,ans);
    else
     traverseRight(root->left,ans);


    ans.push_back(root->data);

}

vector>int>boundary(Node* root){
    vector<int>ans;
    if(root==NULL)return ans;
    ans.push_back(root->data);
    traverseLeft(root->left,ans);
    traverseLeaf(root->left,ans);
    traverseleaf(root->right,ans);
    traverseRight (root->right,ans)

}