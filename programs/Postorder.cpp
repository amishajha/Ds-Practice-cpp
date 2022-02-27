#include<iostream>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;

Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;


}


};


void Postorder(Node* root){
if(root==NULL){
      return ;

}


Postorder(root->left);
Postorder(root->right);
cout<<root->data<<"->";



}
int main(){
Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    Postorder(root);



}
