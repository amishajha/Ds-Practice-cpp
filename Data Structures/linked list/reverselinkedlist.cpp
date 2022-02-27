
#include<iostream>
using namespace std;


class node{
public:
    int data;
    node*next;


    node(int val){
    data=val;
    next=NULL;

    }

};

void insertAtTail(node* &head,int val){




node* n=new node(val);


if(head==NULL){
    head=n;
    return;
}
node* temp=head;

while(temp->next!=NULL){
    temp=temp->next;



}


temp->next=n;



}







void display(node* head){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;

}




}

node* reverse(node* head){

node* prev=NULL;
node* curr=head;
node* nxt;
while(curr!=NULL){
    nxt=curr->next;
    curr->next=prev;


    prev=curr;
    curr=nxt;

}

return prev;

}



int main(){
 node* head=NULL;
insertAtTail(head,10);
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
display(head);
cout<<endl;
node* newhead=reverse(head);
display(newhead);
cout<<endl;







}
