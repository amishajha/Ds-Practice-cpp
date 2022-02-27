class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int sum;
        
        ListNode *temp = head->next;
        ListNode *prev = NULL;
        ListNode *dummy = new ListNode(-1);
        
        while(temp){
            sum=0;
            while(temp->val!=0){
                sum += temp->val;
                temp=temp->next;
            }
            ListNode *curr = new ListNode(sum);
            if(dummy->next==NULL) dummy->next = curr;
            else prev->next = curr;
            prev = curr;
            temp=temp->next;
        }
        return dummy->next;
    }
}