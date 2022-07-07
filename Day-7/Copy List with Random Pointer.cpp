class Solution {
public:
    Node* copyRandomList(Node* head) {
        
       Node* iter=head;
        Node* front=head;
        while(iter!=NULL){
            front=iter->next;
            Node* copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        iter=head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random=iter->random->next;
            }
            iter=iter->next->next;
        }
        iter=head;
        Node* pseudoHead=new Node(0);
        Node* copy=pseudoHead;
        while(iter!=NULL){
            front=iter->next->next;
            copy->next=iter->next;
            copy=copy->next;
            iter->next=front;
            iter=front;
        }
        
        return pseudoHead->next;
        
        
    }
};