#include<iostream>
using namespace std;
struct Node{
struct Node* next;
struct Node* prev;
int data;
Node(int x){

data=x;
next=prev=NULL;

}

};


Node* dummy=new Node(-1);
Node* head=dummy;
Node* mid=dummy;
int cnt=0;

void push(int data){
Node* cur=new Node(data);
cur->prev=NULL;
cur->next=head;
cnt++;
head->prev=cur;
head=cur;
if(cnt==1){
    mid=cur;
}
else if(cnt%2==0){
    mid=mid->prev;
}

}
int pop(){
if(cnt=0){
    cout<<"empty";
}

Node* temp=head;
int x=head->data;
head=head->next;
if(head!=NULL)
    head->prev=NULL;
cnt--;
if(cnt&1)
    mid=mid->next;
free(temp);
return x;




}



int middle(){
if(cnt==0){
    cout<<"empty";
    return -1;
}

return mid->data;


}
void printData(){
Node* cur=head;
if(cnt==0){
        cout<<"empty"<<endl;

}

for(int i=0;i<cnt;i++){
    cout<<cur->data<<" ";
    cur=cur->next;
}

cout<<endl;



}
int main(){


push(1);
push(2);
push(5);
push(8);
push(24);
push(24);

printData();
cout<<"middle element is"<<middle()<<endl;















}
