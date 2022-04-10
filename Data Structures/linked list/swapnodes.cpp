class solution{

public :
    
    int findLength(ListNode* head){

    	int len = 0;
    	while(head){
    		head = head->next;
    		len++;
    	}


    	return len;
    }



    ListNode* swapNodes(ListNode* head ,int k){

         
         int len = findLength(head);
         ListNode *curr = head;
         for(int i = 0;i<k-1;i++){
         	curr=curr->next;

         }
         ListNode* last = head;
         for(int i = 0;i<len-k;i++)
         	last = last->next;


          swap(curr->next,last->next);
          return head;
          





    }



























}