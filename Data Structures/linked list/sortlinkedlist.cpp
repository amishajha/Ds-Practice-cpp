#include<iostream>
using namespace std;

// Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
// N = 8
// value[] = {1,2,2,1,2,0,2,2}
// Output: 0 1 1 2 2 2 2 2
// Explanation: All the 0s are segregated
// to the left end of the linked list,
// 2s to the right end of the list, and
// 1s in between


Node* segregate(Node *head) {
      
      Node *temp = head;
      int ones = 0,twoes = 0,zeroes = 0;
      while(temp!=NULL){
        if(temp->data==0){
            zeroes++;
        }
        if(temp->data==1){
            ones++;
        }

        if(temp->data==2){
            twoes++;

        }

        temp=temp->next;


      }

       temp = head;

      while(temp){

        if(zeroes){
            temp->data=0;
            zeroes--;

        }

        else if(ones ){
            temp->data=1;
            ones--;

        }

        else {
            temp->data=2;
            twoes--;

        }

        temp = temp ->next;


      }



      return head;
      ;






        

}
