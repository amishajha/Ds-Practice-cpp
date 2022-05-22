#include<iostream>
#include<queue>
using namespace std;


class node{
      
      public:
      int data;
      node* left;
      node* right;

      node(int d){
          this -> data=d;
      this -> left = NULL;
          this -> right = NULL;
      }

};
node* buildTree(node* root){
    
     cout<<"enter the data"<<endl;
     int data;
     cin>>data;
     root = new node(data);

     if(data==-1){
         return NULL;

     }

     cout<<"Enter data for inserting in left of " <<data<<endl;
     root->left = buildTree(root->left);
     cout<<"Enter data for inserting right " <<data<<endl;
     root->right=buildTree(root->right);
     return root;





}
void levelorder(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp =q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }

        if(temp ->right){
            q.push(temp->right);
        }
    }
}


void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<"";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<(root->data);
    inorder(root->right);
    
}
int main(){

node* root = NULL;
root = buildTree(root);
levelorder(root);
return 0;

}