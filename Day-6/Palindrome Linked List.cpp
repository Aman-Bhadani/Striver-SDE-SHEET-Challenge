class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* dummy=NULL;
        
        while(head!=NULL){
            ListNode* next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
            
        }
        return dummy;
    }
    bool isPalindrome(ListNode* head) {
       if(!head || head->next==NULL) return true;
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(slow->val!=head->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
    }
};