#include<iostream>
using namespace std;

struct Node{
int key;
Node* left,*right;
Node(int key){
this->key=key;
this->left=this->right=nullptr;

}

};

bool isIdentical(Node*x,Node*y){
if(x==nullptr and y==nullptr){
    return true;
}

return (x and y) and (x->key==y->key) and (isIdentical(x->left,y->left)) and (isIdentical(x->right,y->right));


}







int main(){
Node* x=nullptr;
x=new Node(15);
x->left=new Node(11);
x->right=new Node(22);




Node*y=nullptr;
y=new Node(11);
y->left=new Node(11);
y->right=new Node(22);


if(isIdentical(x,y)){
    cout<<"Nodes are identical";
}
else{
    cout<<"nodes are not identical";
}






}
