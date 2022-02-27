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


node* middlenode(node* head){

	node*fast=head;
	node*slow=head;
	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}


	return slow;
	
}

int main()
{
	 node* head=NULL;
insertAtTail(head,10);
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
display(head);
cout<<endl;
node* middle = middlenode(head);
display(middle);
	return 0;
}