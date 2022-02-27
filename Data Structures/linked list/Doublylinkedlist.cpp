#include<iostream>
using namespace std;

class Node{

	 public:
	 	int data;
	 	Node* prev;
	 	Node* next;


	 	Node(int d){
	 		this->data=d;
	 		this->prev=NULL;
	 		this->next=NULL;

	 	}
	 	~Node(){

	 		int val=this->data;
	 		if(next!=NULL){
	 			delete next;
	 			next=NULL;
	 		}

	 		cout<<"memory free for Node with data ";


	 	}



};

void print(Node* head){

	Node* temp=head;
	while(temp!=NULL){
          

          cout<<temp->data<<" ";
          temp=temp->next;


	}

	cout<<endl;

}


void insertAtTail(Node* &tail,int data){

Node* temp= new Node(data);

tail->next=temp;

tail->prev=tail;

tail=temp;








}




void insertAtHead(Node* &head,int d){
if(head==NULL){

	Node* temp=new Node(d);
	head=temp;


}


 

 Node* temp= new Node(d);
 temp->next=head;
 head->prev=temp;
 head=temp;




          


}



void deleteNode(int position,Node* &head){
	if(position==1){
       
       Node* temp=head;
       temp->next->prev=NULL;
       head=temp->next;




	}


	else 
	{

          Node* curr=head;
          Node* prev=NULL;
          int cnt=1;

          while(cnt<position){
       
              prev=curr;
              curr=curr->next;
              cnt++;



              }


          curr->prev=NULL;
         prev->next=curr->next;
         curr->next=NULL;


         delete curr;













	}
}


void insertatposition( Node* &tail ,Node* &head,int position,int d){

if(position==1){
	insertAtHead(head,d);

}
  Node* temp=head;

  int cnt=1;

  while(cnt<position-1){
       
        temp=temp->next;
        cnt++;




  } 


  if(temp->next==NULL){

  	insertAtTail(tail,d);
  	return;

  }


  Node* nodetoInsert=new Node(d);
  nodetoInsert->next=temp->next;

  temp->next->prev=nodetoInsert;
  temp->next=nodetoInsert;
  nodetoInsert->prev=temp;





}



int main()
{

Node* node1=new Node(10);
Node* head=node1;

Node* tail=node1;

insertAtHead(head,22);

insertAtTail(tail,20);

insertatposition(tail,head,2,100);
//  




print(head);


}