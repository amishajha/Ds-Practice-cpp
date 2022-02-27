
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



void insertAtHead(node* &head,int val){
node* n=new node(val);
n->next=head;
head=n;


}


void deletion (node* &head,int val){
node*temp=head;
while(temp->next->data!=val){
    temp=temp->next;
}

node* todelete=temp->next;
temp->next=temp->next->next;
delete todelete;


}
bool searchnode(node* head,int key){
node* temp=head;
while(temp!=NULL){
    if(temp->data==key){
        return true;
    }



    temp=temp->next;

}

return false;


}

void display(node* head){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;

}




}



node* reversenode(node* &head){

node* prev=NULL;
node* curr=head;
node* nextptr;

while(curr!=NULL){
    nextptr=curr->next;
    curr->next=prev;


    prev=curr;
    curr=nextptr;



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
node* newhead=reversenode(head);
display(newhead);






}
