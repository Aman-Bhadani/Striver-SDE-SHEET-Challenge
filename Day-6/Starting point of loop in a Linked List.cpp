class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) break;
        }
        if(fast->next==NULL || fast->next->next==NULL) return NULL;
        ListNode* temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return slow;
       
    }
};