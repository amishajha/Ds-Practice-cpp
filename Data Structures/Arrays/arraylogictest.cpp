//linked list logics

/*You are required to complete below method*/



// Example:
// Input:
// 2
// 3
// 1 3 4
// 3
// 4
// 1 5 2 9
// 2

// Node* deleteNode(Node *head,int x){


// Node* curr=head;

// if(x==1){
    
//     head=curr->next;
//     return head;
    
// }

// Node* curr2 =head;
// for(int i=1;i<x-1;i++){
//     curr2=curr->next;
// }
// curr2->next=curr2->next->next;

    
//     return head;
    
// }



//find the length of the loop in the linked list







// int countNodesinLoop(struct Node *head)
// {
//     Node* fast=head;
//     Node* slow=head;
    
//     bool flag=false;
//     int cnt=0;
//     while(fast->next!=NULL and fast->next->next!=NULL){
        
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             flag=true;
//             break;
          
//            }
            
            
//         }
        
        
//   if(flag){
//         int cnt=1;
//         slow=slow->next;
      
//       while(slow!=fast){
//           slow=slow->next;
//           cnt++;
//       }
      
//       return cnt;
//   }
  
//   else return 0;
// }